// hu22.c
// Read both DHT11 and DHT22
// 2016-06-19	PV	Reboot

#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define MAXTIMINGS 85

#define DHT11PIN 0		// Pin 11
#define DHT22PIN 1		// Pin 12

int dht_dat[5] = {0,0,0,0,0};

void read_dht_dat(uint8_t isDHT11, uint8_t DHTPIN)
{
	uint8_t laststate = HIGH;
	uint8_t counter = 0;
	uint8_t j = 0, i;

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

	printf("Exit loop i=%d, j=%d, counter=%d,  data=%02x %02x %02x %02x %02x\n", i, j, counter, dht_dat[0], dht_dat[1], dht_dat[2], dht_dat[3], dht_dat[4]);

	// check we read 40 bits (8bit x 5 ) + verify checksum in the last byte
	// print it out if data is good
	if ((j >= 40) && 
			(dht_dat[4] == ((dht_dat[0] + dht_dat[1] + dht_dat[2] + dht_dat[3]) & 0xFF)) ) {

		float h, t;
		if (isDHT11) {
			h = dht_dat[0];
			t = dht_dat[2];
		} else {
			h = ((dht_dat[0] & 0x7F)*256 + dht_dat[1])/10.0;
			t = ((dht_dat[2] & 0x7F)*256 + dht_dat[3])/10.0;
			if (dht_dat[2] & 0x80) t = -t;
		}

		printf("%s: Humidity = %.1f %% Temperature = %.1f C\n", isDHT11?"DHT11":"DHT22", h, t);
	}
	else
	{
		printf("Data not good, skip\n");
	}
}

int main (void)
{

	printf ("Raspberry Pi wiringPi DHT11/DHT22 Humidity and Temperature test program\n") ;

	if (wiringPiSetup () == -1)
		exit (1) ;

	while (1) 
	{
		read_dht_dat(1, DHT11PIN);
		read_dht_dat(0, DHT22PIN);
		delay(2000); // wait 2sec to refresh because of DHT22
	}

	return 0 ;
}
