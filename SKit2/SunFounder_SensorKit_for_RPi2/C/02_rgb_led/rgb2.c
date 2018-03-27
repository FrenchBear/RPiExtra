#include <wiringPi.h>
#include <softPwm.h>
#include <stdlib.h>			// For exit()
#include <stdio.h>
#include <signal.h>

#define uchar unsigned char

#define LedPinRed    0
#define LedPinGreen  1
#define LedPinBlue   2

void ledInit(void)
{
	softPwmCreate(LedPinRed,  0, 100);
	softPwmCreate(LedPinGreen,0, 100);
	softPwmCreate(LedPinBlue, 0, 100);
}

void ledColorSet(uchar r_val, uchar g_val, uchar b_val)
{
	softPwmWrite(LedPinRed,   r_val);
	softPwmWrite(LedPinGreen, g_val);
	softPwmWrite(LedPinBlue,  b_val);
}

// Clean-up, turn off leds and exit program on Ctrl+C
void ex_program(int sig) {
	softPwmStop(LedPinRed);
	softPwmStop(LedPinGreen);
	softPwmStop(LedPinBlue);

	// Set all three outputs to HIGH to turn off the led (common anode)
	digitalWrite(LedPinRed, HIGH);
	digitalWrite(LedPinGreen, HIGH);
	digitalWrite(LedPinBlue, HIGH);

	printf("Terminated.\n");
	exit(1);
}

int main(void)
{
	int i;

	if(wiringPiSetup() == -1){ //when initialize wiring failed, print message to screen
		printf("setup wiringPi failed !");
		return 1; 
	}

	// On Ctrl+C
	signal(SIGINT, ex_program);

	// Initialize soft PWM
	ledInit();

	int redLevel = 0;
	int greenLevel = 0;
	int blueLevel = 0;

	int redDelta = 3;
	int greenDelta = 5;
	int blueDelta = 7;

	while(1){
		// printf("%3d %3d %3d\n", redLevel, greenLevel, blueLevel);
		ledColorSet(redLevel,greenLevel,blueLevel);
		delay(50);

		if (redLevel+redDelta<0 || redLevel+redDelta>100) redDelta = -redDelta;
		if (greenLevel+greenDelta<0 || greenLevel+greenDelta>100) greenDelta = -greenDelta;
		if (blueLevel+blueDelta<0 || blueLevel+blueDelta>100) blueDelta = -blueDelta;

		redLevel += redDelta;
		greenLevel += greenDelta;
		blueLevel += blueDelta;
	}

	return 0;
}
