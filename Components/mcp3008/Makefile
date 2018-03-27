CC = gcc
CFLAGS = -Wall -std=gnu11
LDLIBS = -lwiringPi

make:	p1 p2 p3

p1:	p1.c
	gcc $(CFLAGS) p1.c -o p1 -lwiringPi

p2:	p2.c
	gcc $(CFLAGS) p2.c -o p2 -lbcm2835

p3:	p3.c
	gcc $(CFLAGS) p3.c -o p3 -lwiringPi -lncurses

