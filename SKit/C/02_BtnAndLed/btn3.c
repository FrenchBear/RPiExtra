/* btn3.c
** 2016-04-18	PV
** When button is pressed, starts a 800ms period flashing led
*/

#include <wiringPi.h>
#include <stdio.h>
#include <time.h>

#define LedPin    0
#define ButtonPin 1

long long current_time_ms() {
	struct timespec spec;
	clock_gettime(CLOCK_REALTIME, &spec);
	long long ms = spec.tv_sec*1000LL + spec.tv_nsec/1000000;
	return ms;
}

int main(void)
{
	if(wiringPiSetup() == -1){ //when initialize wiring failed,print messageto screen
		printf("setup wiringPi failed !");
		return 1; 
	}
	
	pinMode(LedPin, OUTPUT); 
	pinMode(ButtonPin, INPUT);

	// printf("%lld\n", current_time_ms());
	// printf("%lld\n", current_time_ms());

	pullUpDnControl(ButtonPin, PUD_UP);  //pull up to 3.3V,make GPIO1 a stable level
	long long tstart = 0;
	while(1){
		if (digitalRead(ButtonPin) == 0) { //indicate that button has pressed down
			if (tstart==0) 
				tstart = current_time_ms();
			digitalWrite(LedPin, ((current_time_ms()-tstart)%800<400) ? LOW : HIGH);  //LOW = led on, first 400ms
		}
		else {
			tstart = 0;
			digitalWrite(LedPin, HIGH);
		}
	}

	return 0;
}


