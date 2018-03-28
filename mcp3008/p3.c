// p3.c
// Test mcp3008 spi interface using wiringPi library and ncurses
// 4 potentiometers on inputs D0 to D3
// 2016-05-14	PV

#include <wiringPi.h>
#include <mcp3004.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <ncurses.h>

#define BASE 200
#define SPI_CHAN 0

void exitprogram(int sig) {
	endwin();
	printf("Terminated\n");
	exit(0);
}

int map2(int value, int min_in, int max_in, int min_out, int max_out) {
	return (value-min_in)/(double)(max_in-min_in)*(max_out-min_out)+min_out;
}

int main() {
	if (wiringPiSetup()==-1) {
		printf("Echec initialisation.\n");
		exit(1);
	}

	initscr();				// Start curses
	//raw();					// Line buffering disabled
	//keypad(stdscr, TRUE);	// We get F1, F2...
	noecho();				// Don't echo while we do getch()
	refresh();

	mvprintw(0, 0, "Test mcp3008 SPI interface using wiringPi library and ncurses");
	mvprintw(1, 0, "2016-05-14 PV");

	signal(SIGINT, exitprogram);

	mcp3004Setup(BASE, SPI_CHAN);

	while(1) {
		for (int chan=0 ; chan<4 ; chan++) {
			int x = analogRead(BASE+chan);
			mvprintw(5+2*chan, 0, "%4d ", x);
			
			int l = map2(x, 0, 1023, 0, COLS-10);
			move(5+2*chan, 10);
			for (int i=0 ; i<l ; i++)
				printw("#");
			for (int i=l ; i<COLS-10 ; i++)
				printw(" ");
		}
		refresh();
		delay(100);
	}

	return 0;
}

