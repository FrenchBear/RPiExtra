// th2.c
// Version à 6 capteurs
// 2016-06-19	PV
//
// Convertisseur Analog to Digital PCF8591 on I2C bus: Vcc=3.3V, GND=0V, SDA=SDA1=Pin 3, SCL=SCL1=Pin 5
// Analog Temperature Sensor: Vcc=3.3V, GND=0V, A0=PCF8591 AIn0
// Thermistor: Vcc=3.3V, GND=0V, SIG=PCF8591 AIn1
// LM35: R=3.3V, G=0V, Y=PCF8591 AIn2
// DS18B20: Vcc=3.3V (or 5V), G=0V, SIG=1-Wire In GPIO4=Pin 7 (needs modules w1-gpio and w1-therm)
// DHT11: Vcc=5V, GND=0V, Sig=Pin 11
// DHT22: Vcc=5V, GND=0V, Sig=Pin 12

/* Output example:

Analog temp: 22.37
Thermistor:  22.37
LM35:        23.29
DS18B20:     22.62
DHT11:       24.00
DHT22:       23.80

Analog temp: 22.37
Thermistor:  22.37
LM35:        23.29
DS18B20:     22.56
DHT11:       24.00
DHT22:       23.80

*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>		// open
#include <unistd.h>		// read
#include <string.h>		// strchr
#include <ctype.h>		// isdigit
#include <stdint.h>		// uint8_t
#include <wiringPi.h>
#include <pcf8591.h>
#include <math.h>
#include <signal.h>
#include <errno.h>

#define		PCF     120

// From thermistor
double GetAnalogTemp(int port) {
	unsigned char analogVal;
	double Vr, Rt, temp;
	
	analogVal = analogRead(PCF + port);
	Vr = 5 * (double)(analogVal) / 255;
	Rt = 10000 * (double)(Vr) / (5 - (double)(Vr));
	temp = 1 / (((log(Rt/10000)) / 3950)+(1 / (273.15 + 25)));
	temp = temp - 273.15;
	return temp;
}

// From LM35
double GetLM35Temp(int port) {
	unsigned char analogVal;
	double Vr, temp;
	
	analogVal = analogRead(PCF + port);
	Vr = 3.3 * (double)(analogVal) / 255;		// Since on RPi Vcc is 3.3V, but 5V on Arduino
	temp = 100*Vr;
	return temp;
}

// For DS18B20
#define  BUFSIZE  128
const char *addr = "/sys/bus/w1/devices/28-0415a17c73ff/w1_slave";
double GetDS18B20Temp() {
	float temp;
	int i;
    int fd;
	int ret;

	char buf[BUFSIZE];
	char tempBuf[5];

	fd = open(addr, O_RDONLY);
	if(-1 == fd){
		perror("DS18B20: Open device file error");
		return 0;
	}

	while(1) {
		ret = read(fd, buf, BUFSIZE);
		if (ret==0) break;
		if (-1 == ret) {
			if(errno==EINTR) continue;
			perror("DS18B20: read()");
			close(fd);
			return 0;
		}
	}
	close(fd);

	char *p = strchr(buf, 't');
	if (p==NULL)
		return -1;

	for (i=2 ; isdigit(p[i]) ; i++)
		tempBuf[i-2] = p[i]; 	
	tempBuf[i-2] = 0;
	temp = (float)atoi(tempBuf) / 1000;
	return temp;
}

// Version DHT11/DHT22
#define MAXTIMINGS 85
#define DHT11PIN 0		// Pin 11
#define DHT22PIN 1		// Pin 12
int dht_dat[5] = {0,0,0,0,0};
double GetDHTTemp(uint8_t isDHT11)
{
	uint8_t laststate = HIGH;
	uint8_t counter = 0;
	uint8_t j = 0, i;
	uint8_t DHTPIN = isDHT11?DHT11PIN:DHT22PIN;

	dht_dat[0] = dht_dat[1] = dht_dat[2] = dht_dat[3] = dht_dat[4] = 0;

	// pull pin down for 18 milliseconds
	pinMode(DHTPIN, OUTPUT);
	digitalWrite(DHTPIN, LOW);
	delay(18);
	// then pull it up for 40 microseconds
	digitalWrite(DHTPIN, HIGH);
	delayMicroseconds(40); 
	// prepare to read the pin
	pinMode(DHTPIN, INPUT);

	while (digitalRead(DHTPIN==1))
	    delayMicroseconds(1);

	// detect change and read data
	for ( i=0; i< MAXTIMINGS; i++) {
		counter = 0;
		while (digitalRead(DHTPIN) == laststate) {
			counter++;
			delayMicroseconds(1);
			if (counter == 255) {
				break;
			}
		}
		laststate = digitalRead(DHTPIN);

		if (counter == 255) break;

		// ignore first 3 transitions
		if ((i >= 4) && (i%2 == 0)) {
			// shove each bit into the storage bytes
			dht_dat[j/8] <<= 1;
			if (counter > 30)
				dht_dat[j/8] |= 1;
			j++;
		}
	}

	//printf("Exit loop i=%d, j=%d, counter=%d,  data=%02x %02x %02x %02x %02x\n", i, j, counter, dht_dat[0], dht_dat[1], dht_dat[2], dht_dat[3], dht_dat[4]);

	// check we read 40 bits (8bit x 5 ) + verify checksum in the last byte
	// print it out if data is good
	if ((j >= 40) && 
			(dht_dat[4] == ((dht_dat[0] + dht_dat[1] + dht_dat[2] + dht_dat[3]) & 0xFF)) ) {

		//double h;
		double t;
		if (isDHT11) {
			//h = dht_dat[0];
			t = dht_dat[2];
		} else {
			//h = ((dht_dat[0] & 0x7F)*256 + dht_dat[1])/10.0;
			t = ((dht_dat[2] & 0x7F)*256 + dht_dat[3])/10.0;
			if (dht_dat[2] & 0x80) t = -t;
		}

		//printf("%s: Humidity = %.1f %% Temperature = %.1f C\n", isDHT11?"DHT11":"DHT22", h, t);
		return t;
	}
	else
	{
		//printf("Data not good, skip\n");
		return 0.0;
	}
}

void exit_program(int sig) {
	printf("Terminated.\n");
	exit(0);
}

int main()
{
	if(wiringPiSetup() == -1){
		printf("setup wiringPi failed !");
		return 1;
	}
	// Setup pcf8591 on base pin 120, and address 0x48
	pcf8591Setup(PCF, 0x48);

	signal(SIGINT, exit_program);

	while(1) // loop forever
	{
		double t0 = GetAnalogTemp(0);
		double t1 = GetAnalogTemp(1);
		double t2 = GetLM35Temp(2);
		double t3 = GetDS18B20Temp();
		double t4 = GetDHTTemp(1);
		double t5 = GetDHTTemp(0);
		printf("Analog temp: %.2f\n", t0);
		printf("Thermistor:  %.2f\n", t1);
		printf("LM35:        %.2f\n", t2);
		printf("DS18B20:     %.2f\n", t3);
		printf("DHT11:       %.2f\n", t4);
		printf("DHT22:       %.2f\n", t5);
		
		printf("\n");
		delay (2000);	// 2s because of DHT22
	}
	return 0;
}
