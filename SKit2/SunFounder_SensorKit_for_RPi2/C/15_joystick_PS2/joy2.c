// joy2.c
// Visually represents joystick positions
// 2016-04-30	PV

#include <stdio.h>
#include <wiringPi.h>
#include <pcf8591.h>
#include <signal.h>
#include <stdlib.h>
#include <ncurses.h>

#define PCF       120
#define uchar	unsigned char

int AIN0 = PCF + 0;
int AIN1 = PCF + 1;
int AIN2 = PCF + 2;

void exit_program(int sig) {
	endwin();
	printf("Terminated.\n");
	exit(1);
}

int map2(int value, int min_in, int max_in, int min_out, int max_out) {
	return (value-min_in)/(double)(max_in-min_in)*(max_out-min_out)+min_out;
}

void wp2(WINDOW *w, int y, int x, char *s) {
	mvwprintw(w, map2(y,0,255,1,LINES-4), map2(x,0,255,1,2*(LINES-3)), s);
}

WINDOW *nw;

void initcurses() {
	initscr();				// Start curses
	raw();					// Line buffering disabled
	keypad(stdscr, TRUE);	// We get F1, F2...
	noecho();				// Don't echo while we do getch()
	refresh();

	nw = newwin(LINES-2, 2*(LINES-2), 1, COLS/2-LINES);
	box(nw, 0, 0);
}


void direction() {
	int x, y, b;
	x = analogRead(AIN1);
	y = analogRead(AIN0);
	b = analogRead(AIN2);

	// Press to exit
	if (b<10)
		exit_program(0);

	//printf("%3d  %3d\n", x, y);
	wp2(nw, x, y, "#");
	wrefresh(nw);
}

int main (void)
{
	wiringPiSetup();

	signal(SIGINT, exit_program);

	initcurses();

	// Setup pcf8591 on base pin 120, and address 0x48
	pcf8591Setup(PCF, 0x48);
	while(1) // loop forever
	{
		direction();
	}

	return 0;
}
