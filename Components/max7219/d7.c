// d7.c
// Défilement de courbe aléatoire
// 2016-05-13	PV

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
#include <memory.h>

#define uchar unsigned char
#define uint unsigned int

#define Max7219_pinCS  RPI_GPIO_P1_24

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

	uchar levels[16];
	memset(levels, 0, sizeof(levels));
	
	while(1) {
		for (uint i=1 ; i<=15 ; i++)
			levels[i-1] = levels[i];
		levels[15] = rand()%9;

		for(uchar i=1; i<9 ; i++)
		{
			uchar b1 =
				(levels[0]<i ? 0x80 : 0) |
				(levels[1]<i ? 0x40 : 0) |
				(levels[2]<i ? 0x20 : 0) |
				(levels[3]<i ? 0x10 : 0) |
				(levels[4]<i ? 0x08 : 0) |
				(levels[5]<i ? 0x04 : 0) |
				(levels[6]<i ? 0x02 : 0) |
				(levels[7]<i ? 0x01 : 0);

			uchar b2 =
				(levels[8]<i ? 0x80 : 0) |
				(levels[9]<i ? 0x40 : 0) |
				(levels[10]<i ? 0x20 : 0) |
				(levels[11]<i ? 0x10 : 0) |
				(levels[12]<i ? 0x08 : 0) |
				(levels[13]<i ? 0x04 : 0) |
				(levels[14]<i ? 0x02 : 0) |
				(levels[15]<i ? 0x01 : 0);

			Write_Max7219(i, b2, i, b1);
		}
		Delay_xms(40);
	}


	bcm2835_spi_end();
	bcm2835_close();

	return 0;
}

