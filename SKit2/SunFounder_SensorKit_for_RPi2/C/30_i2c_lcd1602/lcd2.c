#include <stdio.h>
#include <wiringPi.h>
#include <wiringPiI2C.h>
#include <string.h>

int LCDAddr = 0x27;
int BLEN = 1;
int fd;

#define LINES 4
#define COLUMNS 20

void write_word(int data){
	int temp = data;
	if ( BLEN == 1 )
		temp |= 0x08;
	else
		temp &= 0xF7;
	wiringPiI2CWrite(fd, temp);
}

void send_command(int comm){
	int buf;
	// Send bit7-4 firstly
	buf = comm & 0xF0;
	buf |= 0x04;			// RS = 0, RW = 0, EN = 1
	write_word(buf);
	delay(2);
	buf &= 0xFB;			// Make EN = 0
	write_word(buf);

	// Send bit3-0 secondly
	buf = (comm & 0x0F) << 4;
	buf |= 0x04;			// RS = 0, RW = 0, EN = 1
	write_word(buf);
	delay(2);
	buf &= 0xFB;			// Make EN = 0
	write_word(buf);
}

void send_data(int data){
	int buf;
	// Send bit7-4 firstly
	buf = data & 0xF0;
	buf |= 0x05;			// RS = 1, RW = 0, EN = 1
	write_word(buf);
	delay(2);
	buf &= 0xFB;			// Make EN = 0
	write_word(buf);

	// Send bit3-0 secondly
	buf = (data & 0x0F) << 4;
	buf |= 0x05;			// RS = 1, RW = 0, EN = 1
	write_word(buf);
	delay(2);
	buf &= 0xFB;			// Make EN = 0
	write_word(buf);
}

void init(){
	send_command(0x33);	// Must initialize to 8-line mode at first
	delay(5);
	send_command(0x32);	// Then initialize to 4-line mode
	delay(5);
	send_command(0x28);	// 2 Lines & 5*7 dots
	delay(5);
	send_command(0x0C);	// Enable display without cursor
	delay(5);
	send_command(0x01);	// Clear Screen
	wiringPiI2CWrite(fd, 0x08);
}

void clear(){
	send_command(0x01);	//clear Screen
}

void write(int x, int y, char data[]){
	int addr, i;
	int tmp;
	if (x < 0)  x = 0;
	if (x > (COLUMNS-1)) x = (COLUMNS-1);
	if (y < 0)  y = 0;
	if (y > (LINES-1))  y = (LINES-1);

	// Move cursor
	//addr = 0x80 + 0x40 * y + x;
	switch(y) {
		case 0:	addr=0x80; break;
		case 1:	addr=0xC0; break;
		case 2:	addr=0x94; break;
		case 3:	addr=0xD4; break;
	}
	addr += x;
	send_command(addr);
	
	tmp = strlen(data);
	for (i = 0; i < tmp; i++){
		send_data(data[i]);
	}
}


void main(){
	fd = wiringPiI2CSetup(LCDAddr);
	init();
	write(0, 0, "Greetings!1234567890");
	write(5, 1, "Col 5 Row 1");
	write(2, 2, "Third line");
	write(3, 3, "Last line");
	delay(2000);

	send_command(0x40);
	send_data(0x1F);
	send_data(0x1F);
	send_data(0x1F);
	send_data(0x1F);
	send_data(0x0);
	send_data(0x1F);
	send_data(0x1F);
	send_data(0x1F);

	send_command(0x48);
	send_data(0x1F);
	send_data(0x1F);
	send_data(0x1F);
	send_data(0x1F);
	send_data(0x0);
	send_data(0x0);
	send_data(0x0);
	send_data(0x0);

	send_command(0x50);
	send_data(0x0);
	send_data(0x0);
	send_data(0x0);
	send_data(0x0);
	send_data(0x0);
	send_data(0x1F);
	send_data(0x1F);
	send_data(0x1F);

	send_command(0x58);
	send_data(0x0);
	send_data(0x0);
	send_data(0x0);
	send_data(0x0);
	send_data(0x0);
	send_data(0x0);
	send_data(0x0);
	send_data(0x0);

	char b[2];
	b[0] = 8;
	write(0, 1, b);
	send_data(1);
	send_data(2);
	send_data(3);
	/*
	b[0] = 1;
	write(1, 1, b);
	b[0] = 2;
	write(2, 1, b);
	b[0] = 3;
	write(3, 1, b);
	*/

	//clear();
}
