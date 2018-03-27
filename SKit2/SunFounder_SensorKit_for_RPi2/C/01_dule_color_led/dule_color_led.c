#include <wiringPi.h>
#include <softPwm.h>
#include <stdio.h>

#define uchar unsigned char

#define LedPinRed    0
#define LedPinGreen  1

void ledInit(void)
{
	softPwmCreate(LedPinRed,  0, 100);
	softPwmCreate(LedPinGreen,0, 100);
}

void ledColorSet(uchar r_val, uchar g_val)
{
	softPwmWrite(LedPinRed,   r_val);
	softPwmWrite(LedPinGreen, g_val);
}

int main(void)
{
	int i;

	if(wiringPiSetup() == -1){ //when initialize wiring failed,print messageto screen
		printf("setup wiringPi failed !");
		return 1; 
	}
	//printf("linker LedPin : GPIO %d(wiringPi pin)\n",LedPin); //when initialize wiring successfully,print message to screen

	ledInit();

	while(1){
		printf("All red\n");
		ledColorSet(0xff,0x00);   //red	
		delay(500);
		printf("R=0x0F, G=0xF0\n");
		ledColorSet(0x0f,0xf0);		// kind of orange
		delay(500);
		printf("All green\n");
		ledColorSet(0x00,0xff);   //green
		delay(500);
		printf("R=0xFF, G=0x45\n");
		ledColorSet(0xff,0x45);	
		delay(500);
		printf("R=0xFF, G=0xFF\n");
		ledColorSet(0xff,0xff);	
		delay(500);
		printf("R=0x7C, G=0xFC\n");
		ledColorSet(0x7c,0xfc);	
		delay(500);
	}

	return 0;
}
