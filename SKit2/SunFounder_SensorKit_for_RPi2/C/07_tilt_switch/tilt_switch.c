#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>			// For exit()
#include <signal.h>
#include <string.h>

#define TiltPin		0
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

int main(void)
{
printf("start main\n");
	if(wiringPiSetup() == -1){ //when initialize wiring failed,print messageto screen
		printf("setup wiringPi failed !");
		return 1; 
	}
printf("wiringPi initialized\n");

	pinMode(TiltPin, INPUT);
	LED("GREEN");

	// On Ctrl+C
	signal(SIGINT, ex_program);
printf("start main loop\n");
	
	while(1){
		if(0 == digitalRead(TiltPin)){
			delay(10);
			if(0 == digitalRead(TiltPin)){
				if (strcmp(currentColor, "RED")!=0) {
					LED("RED");
					printf("Tilt!\n");
				}
			}
		}
		else if(1 == digitalRead(TiltPin)){
			delay(10);
			if(1 == digitalRead(TiltPin)) {
				if (strcmp(currentColor, "GREEN")!=0) {
					LED("GREEN");
					printf("Ok\n");
				}
			}
		}
	}
	return 0;
}
