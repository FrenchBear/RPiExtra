/**********************************

$sudo ./l602
------------------
|  Raspberry Pi! |
|51.9C 215/477MB |
------------------

$sudo ./1602 QtSharp
------------------
|QtSharp         |
|51.9C 215/477MB |
------------------

$sudo ./1602 \ \ Hello\ World
------------------
|  hello world   |
|51.9C 215/477MB |
------------------

************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

#include <wiringPi.h>
#include <lcd.h>

int main(int args, char *argv[])
{
	FILE *fp;
	int fd;
	char temp_char[15];
	char Total[20];
	char Free[20];
	float Temp;
	
	if(wiringPiSetup() == -1){
		exit(1);
	}
	
	fd = lcdInit(2, 16, 4,  15,16 , 0,1,2,3,4,5,6,7); //see /usr/local/include/lcd.h
	if (fd == -1){
		printf ("lcdInit 1 failed\n") ;
		return 1;
	}
	sleep(1);

	lcdPosition(fd, 0, 0); lcdPuts (fd, "  Raspberry Pi!");
	//sleep(1);

	char s[16];
// 	int i, j;
// 	for (j=160 ; j<255 ; j+=16)
// 	{
// 		for (i=0 ; i<15 ; i++)
// 			s[i] = j+i;
// 		//lcdPosition(fd, 0, 0);
// 		//lcdPuts(fd, "                ");
// 		lcdPosition(fd, 0, 0); lcdPuts(fd, s);
// 		sleep(1);
// 	}

	if(argv[1]){
		lcdPosition(fd, 0, 0);
		lcdPuts(fd, "                ");
		lcdPosition(fd, 0, 0); lcdPuts(fd, argv[1]);
	} 

	while(1){
		time_t ct;
		time(&ct);
		struct tm *lt = localtime(&ct);
		sprintf(s, "%1d-%02d-%02d %02d:%02d:%02d", lt->tm_year%10, lt->tm_mon+1, lt->tm_mday, lt->tm_hour, lt->tm_min, lt->tm_sec);
		lcdPosition(fd, 0, 0); lcdPuts(fd, s);

		fp=fopen("/sys/class/thermal/thermal_zone0/temp","r"); //read Rpi's tempture
		fgets(temp_char,9,fp);
		Temp = atof(temp_char)/1000;
		lcdPosition(fd, 0, 1); lcdPrintf(fd, "%3.1fC", Temp);
		fclose(fp);

		fp=fopen("/proc/meminfo","r"); //read RAM infomation
		fgets(Total,19,fp);
		fgets(Total,4,fp);
		fgets(Free,9,fp);
		fgets(Free,19,fp);
		fgets(Free,4,fp);
//		printf("%3d/%3dMB\n",atoi(Free),atoi(Total));
		lcdPosition(fd, 7, 1);
		lcdPrintf(fd, "%3d/%3dMB", atoi(Free), atoi(Total)) ;
		fclose(fp);

		sleep(1);
	}

	return 0;

}
