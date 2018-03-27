// p2.c
// Test mcp3008 spi interface using bcm2835 library
// 4 potentiometers on inputs D0 to D3
// 2016-05-14	PV

#include <bcm2835.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void exitprogram(int sig) {
	bcm2835_spi_end();
	bcm2835_close();
	printf("Terminated\n");
	exit(0);
}


int getlevel(unsigned char port) {
	char buffout[4];
	char buffin[4];
	buffout[0] = (port<<3)|0xC0;
	buffout[1] = 0;
	bcm2835_spi_transfernb(buffout, buffin, 3);
	return (((buffin[0]<<8)+buffin[1])<<1)+(buffin[2]>>7);
}

int main() {
	printf("Test mcp3008 using bcm2835 library\n");

	signal(SIGINT, exitprogram);

	bcm2835_init();
	bcm2835_spi_begin();
	bcm2835_spi_setChipSelectPolarity(BCM2835_SPI_CS0, 0);
	bcm2835_spi_setClockDivider(BCM2835_SPI_CLOCK_DIVIDER_4096);
	bcm2835_spi_setDataMode(BCM2835_SPI_MODE0);
	bcm2835_spi_chipSelect(BCM2835_SPI_CS0);

	while(1) {
		int l0, l1, l2, l3;
		l0 = getlevel(0);
		l1 = getlevel(1);
		l2 = getlevel(2);
		l3 = getlevel(3);
		printf("%5d %5d %5d %5d\r", l0, l1, l2, l3);
		fflush(stdout);
		bcm2835_delay(100);
	}
}

