# m3.py
# Drawings based on petentiometer input using a mcp3008 chip
# 2014-05-16	PV

import pygame
import math
import spidev


# Function to read SPI data from MCP3008 chip
# Channel must be an integer 0-7
def ReadChannel(channel):
  adc = spi.xfer2([1, (8+channel)<<4, 0])
  data = ((adc[1]&3) << 8) + adc[2]
  return data


def mapf(value, min_in, max_in, min_out, max_out):
	return float(value-min_in)/float(max_in-min_in)*(max_out-min_out)+min_out

def level(n, x):
	global xc, yc, radius
	global screen, res, width, height
	global myfont

	xoff = (n//2)*width/2
	yoff = (n%2)*height/2+60

	pygame.draw.rect(screen, pygame.Color(20*n, 35*n, 50*n), [xoff, yoff-60, width/2, height/2], 0)
	pygame.draw.arc(screen, pygame.Color(0, 255, 0), [xoff+(width/2-2*radius)/2, 10+yoff, radius*2, radius*2], math.pi/4-0.015, 3*math.pi/4+0.03, 3)
	pygame.draw.circle(screen, pygame.Color(0, 255, 0), [xoff+xc, yoff+yc], 6, 0)

	for i in range(0, 101):
		a = mapf(i, 0, 100, math.pi/4, 3*math.pi/4)
		pygame.draw.line(screen, pygame.Color(0, 255, 30), [int(xoff+xc-(radius-7)*math.cos(a)), int(yoff+yc-(radius-7)*math.sin(a))], [int(xoff+xc-(radius-1)*math.cos(a)), int(yoff+yc-(radius-1)*math.sin(a))], 1)

	for i in range(0, 11):
		a = mapf(i, 0, 10, math.pi/4, 3*math.pi/4)
		pygame.draw.line(screen, pygame.Color(0, 255, 0), [int(xoff+xc-(radius-15)*math.cos(a)), int(yoff+yc-(radius-15)*math.sin(a))], [int(xoff+xc-(radius-1)*math.cos(a)), int(yoff+yc-(radius-1)*math.sin(a))], 3)

	a = mapf(x, 0, 1024, math.pi/4, 3*math.pi/4)
	pygame.draw.line(screen, pygame.Color(255, 128, 0), [xoff+xc, yoff+yc], [int(xoff+xc-(radius-20)*math.cos(a)), int(yoff+yc-(radius-20)*math.sin(a))], 2)

	l = mapf(x, 0, 1024, 0, 100)
	label = myfont.render("{0:5.1f}".format(l), 1, pygame.Color(255, 255, 0))
	screen.blit(label, (xoff+100, yoff+height/2-110))

	pygame.display.update()

def setup_pygame():
	global screen, res, width, height
	pygame.init()
	res = (1920, 1080)
	width, height = res
	screen = pygame.display.set_mode(res, pygame.FULLSCREEN)

	global xc, yc, radius
	radius = height//2-200
	xc = int(width/4)
	yc = radius+10

	global myfont
	myfont = pygame.font.SysFont("monospace", 36)

def setup_SPI():
	global spi
	# Open SPI bus
	spi = spidev.SpiDev()
	spi.open(0, 0)

def display():
	global readings
	for n in range(4):
		x = 1024-ReadChannel(n)
		if math.fabs(x-readings[n])>10:
			readings[n] = x
			level(n, x)

if __name__=='__main__':
	setup_pygame()
	setup_SPI()
	running = True
	global readings
	readings = [-1, -1, -1, -1]
	while running:
		display()
		for event in pygame.event.get():
			if event.type==pygame.KEYDOWN:
				running = False
				break
	pygame.quit()

