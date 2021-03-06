// d4.c
// Scroll d'un message sur le RPi_LED_Display
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
#include <string.h>

#define uchar unsigned char
#define uint unsigned int

//#define Max7219_pinCLK  RPI_GPIO_P1_11
#define Max7219_pinCS  RPI_GPIO_P1_24
//#define Max7219_pinDIN  RPI_V2_GPIO_P1_13

uchar font[96][8] = {
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},	//  	32
    {0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x18, 0x00},	// !	33
    {0x6C, 0x6C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},	// "	34
    {0x6C, 0x6C, 0xFE, 0x6C, 0xFE, 0x6C, 0x6C, 0x00},	// #	35
    {0x18, 0x3E, 0x60, 0x3C, 0x06, 0x7C, 0x18, 0x00},	// $	36
    {0x00, 0x66, 0xAC, 0xD8, 0x36, 0x6A, 0xCC, 0x00},	// %	37
    {0x38, 0x6C, 0x68, 0x76, 0xDC, 0xCE, 0x7B, 0x00},	// &	38
    {0x18, 0x18, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00},	// '	39
    {0x0C, 0x18, 0x30, 0x30, 0x30, 0x18, 0x0C, 0x00},	// (	40
    {0x30, 0x18, 0x0C, 0x0C, 0x0C, 0x18, 0x30, 0x00},	// )	41
    {0x00, 0x66, 0x3C, 0xFF, 0x3C, 0x66, 0x00, 0x00},	// *	42
    {0x00, 0x18, 0x18, 0x7E, 0x18, 0x18, 0x00, 0x00},	// +	43
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x30},	// ,	44
    {0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00},	// -	45
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00},	// .	46
    {0x03, 0x06, 0x0C, 0x18, 0x30, 0x60, 0xC0, 0x00},	// /	47
    {0x3C, 0x66, 0x6E, 0x7E, 0x76, 0x66, 0x3C, 0x00},	// 0	48
    {0x18, 0x38, 0x78, 0x18, 0x18, 0x18, 0x18, 0x00},	// 1	49
    {0x3C, 0x66, 0x06, 0x0C, 0x18, 0x30, 0x7E, 0x00},	// 2	50
    {0x3C, 0x66, 0x06, 0x1C, 0x06, 0x66, 0x3C, 0x00},	// 3	51
    {0x1C, 0x3C, 0x6C, 0xCC, 0xFE, 0x0C, 0x0C, 0x00},	// 4	52
    {0x7E, 0x60, 0x7C, 0x06, 0x06, 0x66, 0x3C, 0x00},	// 5	53
    {0x1C, 0x30, 0x60, 0x7C, 0x66, 0x66, 0x3C, 0x00},	// 6	54
    {0x7E, 0x06, 0x06, 0x0C, 0x18, 0x18, 0x18, 0x00},	// 7	55
    {0x3C, 0x66, 0x66, 0x3C, 0x66, 0x66, 0x3C, 0x00},	// 8	56
    {0x3C, 0x66, 0x66, 0x3E, 0x06, 0x0C, 0x38, 0x00},	// 9	57
    {0x00, 0x18, 0x18, 0x00, 0x00, 0x18, 0x18, 0x00},	// :	58
    {0x00, 0x18, 0x18, 0x00, 0x00, 0x18, 0x18, 0x30},	// ;	59
    {0x00, 0x06, 0x18, 0x60, 0x18, 0x06, 0x00, 0x00},	// <	60
    {0x00, 0x00, 0x7E, 0x00, 0x7E, 0x00, 0x00, 0x00},	// =	61
    {0x00, 0x60, 0x18, 0x06, 0x18, 0x60, 0x00, 0x00},	// >	62
    {0x3C, 0x66, 0x06, 0x0C, 0x18, 0x00, 0x18, 0x00},	// ?	63
    {0x3C, 0x66, 0x5A, 0x5A, 0x5E, 0x60, 0x3C, 0x00},	// @	64
    {0x3C, 0x66, 0x66, 0x7E, 0x66, 0x66, 0x66, 0x00},	// A	65
    {0x7C, 0x66, 0x66, 0x7C, 0x66, 0x66, 0x7C, 0x00},	// B	66
    {0x1E, 0x30, 0x60, 0x60, 0x60, 0x30, 0x1E, 0x00},	// C	67
    {0x78, 0x6C, 0x66, 0x66, 0x66, 0x6C, 0x78, 0x00},	// D	68
    {0x7E, 0x60, 0x60, 0x78, 0x60, 0x60, 0x7E, 0x00},	// E	69
    {0x7E, 0x60, 0x60, 0x78, 0x60, 0x60, 0x60, 0x00},	// F	70
    {0x3C, 0x66, 0x60, 0x6E, 0x66, 0x66, 0x3E, 0x00},	// G	71
    {0x66, 0x66, 0x66, 0x7E, 0x66, 0x66, 0x66, 0x00},	// H	72
    {0x3C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00},	// I	73
    {0x06, 0x06, 0x06, 0x06, 0x06, 0x66, 0x3C, 0x00},	// J	74
    {0xC6, 0xCC, 0xD8, 0xF0, 0xD8, 0xCC, 0xC6, 0x00},	// K	75
    {0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x7E, 0x00},	// L	76
    {0xC6, 0xEE, 0xFE, 0xD6, 0xC6, 0xC6, 0xC6, 0x00},	// M	77
    {0xC6, 0xE6, 0xF6, 0xDE, 0xCE, 0xC6, 0xC6, 0x00},	// N	78
    {0x3C, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x00},	// O	79
    {0x7C, 0x66, 0x66, 0x7C, 0x60, 0x60, 0x60, 0x00},	// P	80
    {0x78, 0xCC, 0xCC, 0xCC, 0xCC, 0xDC, 0x7E, 0x00},	// Q	81
    {0x7C, 0x66, 0x66, 0x7C, 0x6C, 0x66, 0x66, 0x00},	// R	82
    {0x3C, 0x66, 0x70, 0x3C, 0x0E, 0x66, 0x3C, 0x00},	// S	83
    {0x7E, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00},	// T	84
    {0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x00},	// U	85
    {0x66, 0x66, 0x66, 0x66, 0x3C, 0x3C, 0x18, 0x00},	// V	86
    {0xC6, 0xC6, 0xC6, 0xD6, 0xFE, 0xEE, 0xC6, 0x00},	// W	87
    {0xC3, 0x66, 0x3C, 0x18, 0x3C, 0x66, 0xC3, 0x00},	// X	88
    {0xC3, 0x66, 0x3C, 0x18, 0x18, 0x18, 0x18, 0x00},	// Y	89
    {0xFE, 0x0C, 0x18, 0x30, 0x60, 0xC0, 0xFE, 0x00},	// Z	90
    {0x3C, 0x30, 0x30, 0x30, 0x30, 0x30, 0x3C, 0x00},	// [	91
    {0xC0, 0x60, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x00},	// \	92
    {0x3C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x3C, 0x00},	// ]	93
    {0x18, 0x3C, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00},	// ^	94
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00},	// _	95
    {0x18, 0x18, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00},	// `	96
    {0x00, 0x00, 0x3C, 0x06, 0x3E, 0x66, 0x3E, 0x00},	// a	97
    {0x60, 0x60, 0x7C, 0x66, 0x66, 0x66, 0x7C, 0x00},	// b	98
    {0x00, 0x00, 0x3C, 0x60, 0x60, 0x60, 0x3C, 0x00},	// c	99
    {0x06, 0x06, 0x3E, 0x66, 0x66, 0x66, 0x3E, 0x00},	// d	100
    {0x00, 0x00, 0x3C, 0x66, 0x7E, 0x60, 0x3C, 0x00},	// e	101
    {0x1C, 0x30, 0x7C, 0x30, 0x30, 0x30, 0x30, 0x00},	// f	102
    {0x00, 0x00, 0x3E, 0x66, 0x66, 0x3E, 0x06, 0x3C},	// g	103
    {0x60, 0x60, 0x7C, 0x66, 0x66, 0x66, 0x66, 0x00},	// h	104
    {0x18, 0x00, 0x18, 0x18, 0x18, 0x18, 0x0C, 0x00},	// i	105
    {0x0C, 0x00, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x78},	// j	106
    {0x60, 0x60, 0x66, 0x6C, 0x78, 0x6C, 0x66, 0x00},	// k	107
    {0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x0C, 0x00},	// l	108
    {0x00, 0x00, 0xEC, 0xFE, 0xD6, 0xC6, 0xC6, 0x00},	// m	109
    {0x00, 0x00, 0x7C, 0x66, 0x66, 0x66, 0x66, 0x00},	// n	110
    {0x00, 0x00, 0x3C, 0x66, 0x66, 0x66, 0x3C, 0x00},	// o	111
    {0x00, 0x00, 0x7C, 0x66, 0x66, 0x7C, 0x60, 0x60},	// p	112
    {0x00, 0x00, 0x3E, 0x66, 0x66, 0x3E, 0x06, 0x06},	// q	113
    {0x00, 0x00, 0x7C, 0x66, 0x60, 0x60, 0x60, 0x00},	// r	114
    {0x00, 0x00, 0x3C, 0x60, 0x3C, 0x06, 0x7C, 0x00},	// s	115
    {0x30, 0x30, 0x7C, 0x30, 0x30, 0x30, 0x1C, 0x00},	// t	116
    {0x00, 0x00, 0x66, 0x66, 0x66, 0x66, 0x3E, 0x00},	// u	117
    {0x00, 0x00, 0x66, 0x66, 0x66, 0x3C, 0x18, 0x00},	// v	118
    {0x00, 0x00, 0xC6, 0xC6, 0xD6, 0xFE, 0x6C, 0x00},	// w	119
    {0x00, 0x00, 0xC6, 0x6C, 0x38, 0x6C, 0xC6, 0x00},	// x	120
    {0x00, 0x00, 0x66, 0x66, 0x66, 0x3C, 0x18, 0x30},	// y	121
    {0x00, 0x00, 0x7E, 0x0C, 0x18, 0x30, 0x7E, 0x00},	// z	122
    {0x0C, 0x18, 0x18, 0x30, 0x18, 0x18, 0x0C, 0x00},	// {	123
    {0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00},	// |	124
    {0x30, 0x18, 0x18, 0x0C, 0x18, 0x18, 0x30, 0x00},	// }	125
    {0x00, 0x76, 0xDC, 0x00, 0x00, 0x00, 0x00, 0x00},	// ~	126
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},	// 	127
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
	uchar i, j;

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

	char msg[] = " Il est 00:29, temps d'aller se coucher.  ";

	for(j=0 ; j<strlen(msg)-2 ; j++)
	{
		int c0 = msg[j+2]-' ';
		int c1 = msg[j+1]-' ';
		int c2 = msg[j+0]-' ';

		int s;
		for (s=0 ; s<8 ; s++)
		{
			for(i=1; i<9 ; i++)
			{
				uchar b0, b1, b2;

				b0 = font[c0][i-1];
				b1 = font[c1][i-1];
				b2 = font[c2][i-1];

				b2 = ((b2<<s)&0xFF) + (b1>>(8-s));
				b1 = ((b1<<s)&0xFF) + (b0>>(8-s));

				Write_Max7219(i, b1, i, b2);
			}
			Delay_xms(25);
		}
	}

	bcm2835_spi_end();
	bcm2835_close();

	return 0;
}

