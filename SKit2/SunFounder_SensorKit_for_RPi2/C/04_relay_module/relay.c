#include <wiringPi.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>

#define RelayPin      0


// Clean-up and exit program on Ctrl+C
void ex_program(int sig) {
	// close relay
	digitalWrite(RelayPin, LOW);
	printf("Program terminated\n");
	exit(1);
}

int main(void)
{
	if(wiringPiSetup() == -1){ //when initialize wiring failed,print messageto screen
		printf("setup wiringPi failed !");
		return 1; 
	}
	
	pinMode(RelayPin, OUTPUT);

	// On Ctrl+C
	signal(SIGINT, ex_program);

	while(1){
			digitalWrite(RelayPin, LOW);			
			delay(1000);
			digitalWrite(RelayPin, HIGH);
			delay(1000);
	}

	return 0;
}

