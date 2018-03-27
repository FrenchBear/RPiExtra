# 16_plot.py
# Drawings based on petentiometer input
# 2014-04-30	PV

import pygame
import math
import PCF8591 as ADC 


def mapf(value, min_in, max_in, min_out, max_out):
	return float(value-min_in)/float(max_in-min_in)*(max_out-min_out)+min_out

def level(x):
	global xc, yc, radius
	global screen, res, width, height
	global myfont

	screen.fill(pygame.Color(0,0,0))
	pygame.draw.arc(screen, pygame.Color(0,255,0), [width/2-radius,10,2*radius,2*radius], math.pi/4-0.015, 3*math.pi/4+0.03, 3)
	pygame.draw.circle(screen, pygame.Color(0,255,0), [xc, yc], 6, 0)

	for i in range(0,101):
		a = mapf(i,0,100,math.pi/4,3*math.pi/4)
		pygame.draw.line(screen, pygame.Color(0,255,30), [int(xc-(radius-7)*math.cos(a)), int(yc-(radius-7)*math.sin(a))], [int(xc-(radius-1)*math.cos(a)), int(yc-(radius-1)*math.sin(a))], 1)

	for i in range(0,11):
		a = mapf(i,0,10,math.pi/4,3*math.pi/4)
		pygame.draw.line(screen, pygame.Color(0,255,0), [int(xc-(radius-15)*math.cos(a)), int(yc-(radius-15)*math.sin(a))], [int(xc-(radius-1)*math.cos(a)), int(yc-(radius-1)*math.sin(a))], 3)

	a = mapf(x,0,255,math.pi/4,3*math.pi/4)
	pygame.draw.line(screen, pygame.Color(255,128,0), [xc, yc], [int(xc-(radius-20)*math.cos(a)), int(yc-(radius-20)*math.sin(a))], 1)

	l = mapf(x,0,255,0,100)
	label = myfont.render("{0:5.1f}".format(l), 1, pygame.Color(255,255,0))
	screen.blit(label, (100, height-100))

	pygame.display.update()

def setup_pygame():
	global screen, res, width, height
	pygame.init()
	res = (1920, 1080)
	width, height = res
	screen = pygame.display.set_mode(res, pygame.FULLSCREEN)

	global xc, yc, radius
	radius = height-200
	xc = int(width/2)
	yc = radius+10

	global myfont
	myfont = pygame.font.SysFont("monospace", 36)

def setup_ADC():
	ADC.setup(0x48)					# Setup PCF8591

def display():
	x = ADC.read(0)
	level(x)

if __name__=='__main__':
	setup_pygame()
	setup_ADC()
	running = True
	while running:
		display()
		for event in pygame.event.get():
			if event.type==pygame.KEYDOWN:
				running = False
				break
	pygame.quit()

