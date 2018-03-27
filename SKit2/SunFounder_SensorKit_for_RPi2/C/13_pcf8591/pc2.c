#include <stdio.h>
#include <wiringPi.h>
#include <pcf8591.h>
#include <stdlib.h>
#include <signal.h>

#define PCF       120

void termination(int sig) {
	analogWrite(PCF+0, 0);
	printf("Terminated\n");
	exit(0);	
}

int main (void)
{
	int value;
	wiringPiSetup();

	// On Ctrl+C
    signal(SIGINT, termination);

	// Setup pcf8591 on base pin 120, and address 0x48
	pcf8591Setup(PCF, 0x48);
	while(1) // loop forever
	{
		for(value=0 ; value<200 ; value+=10) {
			analogWrite(PCF+0, value);
			//delayMicroseconds(100);
		}
	}
	return 0 ;
}
