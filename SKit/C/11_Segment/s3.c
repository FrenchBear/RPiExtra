#include <wiringPi.h>
#include <stdio.h>

int main(void)
{
	int i;
	int bit;

	if(wiringPiSetup() == -1){
		printf("wiringPi setup error!\n");
		return -1;
	}

	sr595Setup(100, 10, 0, 2, 1);

	while(1){
		int seq=rand() & 0xff;
			for(bit = 0; bit < 8; bit++){
				digitalWrite(100+bit, seq & (1<<bit));
				delay(1);
			}	
			delay(250);
	}

	return 0;
}
