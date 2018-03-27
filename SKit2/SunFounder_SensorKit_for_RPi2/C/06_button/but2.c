// interrupt-based version
// 2016-04-27	PV

#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>			// For exit()
#include <signal.h>
#include <string.h>

#define BtnPin		0
#define Gpin		1
#define Rpin		2


// Clean-up, turn off leds and exit program on Ctrl+C
void ex_program(int sig) {
	digitalWrite(Gpin, LOW);
	digitalWrite(Rpin, LOW);

	printf("Terminated.\n");
	exit(1);
}

char *currentColor;

void LED(char* color)
{
	pinMode(Gpin, OUTPUT);
	pinMode(Rpin, OUTPUT);
	if (color == "RED")
	{
		digitalWrite(Rpin, HIGH);
		digitalWrite(Gpin, LOW);
	}
	else if (color == "GREEN")
	{
		digitalWrite(Rpin, LOW);
		digitalWrite(Gpin, HIGH);
	}
	else
		printf("LED Error");

	currentColor = color;
}

void interrupt() {
	printf("Interrupt state=%d\n", digitalRead(BtnPin));

	if(0 == digitalRead(BtnPin)) {
		delay(10);
		if(0 == digitalRead(BtnPin)) {
			if (strcmp(currentColor, "RED")!=0) {
				LED("RED");	
			}
		}
	}
	else {
		delay(10);
		if(1 == digitalRead(BtnPin)) {
			if (strcmp(currentColor, "GREEN")!=0) {
				LED("GREEN");
			}
		}
	}
}

int main(void)
{
	if(wiringPiSetup() == -1){ //when initialize wiring failed,print messageto screen
		printf("setup wiringPi failed !");
		return 1; 
	}

	pinMode(BtnPin, INPUT);
	LED("GREEN");

	// On Ctrl+C
	signal(SIGINT, ex_program);

	wiringPiISR(BtnPin, INT_EDGE_BOTH, interrupt);

	for(;;) ;
	return 0;
}
