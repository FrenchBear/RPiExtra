// d5.c
// Horloge sur le RPi_LED_Display
// 2016-05-10	PV

/*
             define from bcm2835.h                       define from Board DVK511
                 3.3V | | 5V               ->                 3.3V | | 5V
    RPI_V2_GPIO_P1_03 | | 5V               ->                  SDA | | 5V
    RPI_V2_GPIO_P1_05 | | GND              ->                  SCL | | GND
       RPI_GPIO_P1_07 | | RPI_GPIO_P1_08   ->                  IO7 | | TX
                  GND | | RPI_GPIO_P1_10   ->                  GND | | RX
       RPI_GPIO_P1_11 | | RPI_GPIO_P1_12   ->                  IO0 | | IO1
    RPI_V2_GPIO_P1_13 | | GND              ->                  IO2 | | GND
       RPI_GPIO_P1_15 | | RPI_GPIO_P1_16   ->                  IO3 | | IO4
                  VCC | | RPI_GPIO_P1_18   ->                  VCC | | IO5
       RPI_GPIO_P1_19 | | GND              ->                 MOSI | | GND
       RPI_GPIO_P1_21 | | RPI_GPIO_P1_22   ->                 MISO | | IO6
       RPI_GPIO_P1_23 | | RPI_GPIO_P1_24   ->                  SCK | | CE0
                  GND | | RPI_GPIO_P1_26   ->                  GND | | CE1
*/

#include <bcm2835.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <time.h>

#define uchar unsigned char
#define uint unsigned int

#define Max7219_pinCS  RPI_GPIO_P1_24

uchar digits[10][8] = {
	{7,5,5,5,5,5,7,0},	// 0
	{1,1,1,1,1,1,1,0},	// 1
	{7,1,1,7,4,4,7,0},	// 2
	{7,1,1,7,1,1,7,0},	// 3
	{5,5,5,7,1,1,1,0},	// 4
	{7,4,4,7,1,1,7,0},	// 5
	{7,4,4,7,5,5,7,0},	// 6
	{7,1,1,1,1,1,1,0},	// 7
	{7,5,5,7,5,5,7,0},	// 8
	{7,5,5,7,1,1,7,0}	// 9
};

void Delay_xms(uint x)
{
	bcm2835_delay(x);
}

void Write_Max7219_byte(uchar DATA)
{
	bcm2835_gpio_write(Max7219_pinCS, LOW);
	bcm2835_spi_transfer(DATA);
}

void Write_Max7219(uchar address1, uchar dat1, uchar address2, uchar dat2)
{
	bcm2835_gpio_write(Max7219_pinCS, LOW);

	Write_Max7219_byte(address1);
	Write_Max7219_byte(dat1); 
	Write_Max7219_byte(address2);
	Write_Max7219_byte(dat2);

	bcm2835_gpio_write(Max7219_pinCS, HIGH);
}

void Init_MAX7219(void)
{
	Write_Max7219(0x09, 0x00, 0x09, 0x00);		// DECODE_MODE
	Write_Max7219(0x0a, 0x02, 0x0a, 0x02);		// INTENSITY
	Write_Max7219(0x0b, 0x07, 0x0b, 0x07);		// SCAN_LIMIT
	Write_Max7219(0x0c, 0x01, 0x0c, 0x01);		// SHUTDOWN
	Write_Max7219(0x0f, 0x00, 0x0f, 0x00);		// DISPLAY_TEST
}

void exit_program(int sig) {
	int i;
	for(i=1; i<9 ; i++)
		Write_Max7219(i, (1<<(i-1))|(1<<(8-i)), i, 0);
	bcm2835_spi_end();
	bcm2835_close();
	exit(0);
}

int main(void)
{
	if (!bcm2835_init())
		return 1;

	signal(SIGINT, exit_program);

	bcm2835_spi_begin();
	bcm2835_spi_setBitOrder(BCM2835_SPI_BIT_ORDER_MSBFIRST);      // The default
	bcm2835_spi_setDataMode(BCM2835_SPI_MODE0);                   // The default
	bcm2835_spi_setClockDivider(BCM2835_SPI_CLOCK_DIVIDER_256);   // The default

	bcm2835_gpio_fsel(Max7219_pinCS, BCM2835_GPIO_FSEL_OUTP); 

	Delay_xms(50);
	Init_MAX7219();

	time_t ct;

	uchar dot = 1;
	while(1) {
		time(&ct);
		struct tm *lt = localtime(&ct);

		uchar d1 = lt->tm_hour/10;
		uchar d2 = lt->tm_hour%10;
		uchar d3 = lt->tm_min/10;
		uchar d4 = lt->tm_min%10;

		for(uchar i=1; i<9 ; i++)
		{
			uchar m1, m2, m3, m4;
			m1 = digits[d1][i-1];
			m2 = digits[d2][i-1];
			m3 = digits[d3][i-1];
			m4 = digits[d4][i-1];

			uchar b1, b2;
			b1 = (m1<<6) | (m2<<2);
			b2 = (m3<<4) | m4;

			if (dot && (i==3 || i==5)) b1 |= 1;

			Write_Max7219(i, b2, i, b1);
		}

		dot ^= 1;
		Delay_xms(490);
	}

	bcm2835_spi_end();
	bcm2835_close();

	return 0;
}

