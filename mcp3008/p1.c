// p1.c
// Test mcp3008 spi interface using wiringPi library
// 4 potentiometers on inputs D0 to D3
// 2016-05-14	PV

#include <wiringPi.h>
#include <mcp3004.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

#define BASE 200
#define SPI_CHAN 0

void exitprogram(int sig) {
	printf("Terminated\n");
	exit(0);
}

int main() {
	int chan, x;

	if (wiringPiSetup()==-1) {
		printf("Echec initialisation.\n");
		exit(1);
	}

	signal(SIGINT, exitprogram);

	mcp3004Setup(BASE, SPI_CHAN);

	while(1) {
		for (chan=0 ; chan<4 ; chan++) {
			x = analogRead(BASE+chan);
			printf("%4d ", x);
		}
		fflush(stdout);
		printf("\r");
		delay(100);
	}

	return 0;
}

