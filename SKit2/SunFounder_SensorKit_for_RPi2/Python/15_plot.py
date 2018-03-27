# 15_plot.py
# Drawing based on 2-axes joystick input
# 2014-04-30	PV

import pygame
import PCF8591 as ADC 

def map2(value, min_in, max_in, min_out, max_out):
	return int(0.5+float(value-min_in)/(max_in-min_in)*(max_out-min_out)+min_out)

def dot(x,y):
	global x0, y0, side
	global window, res, width, height
	x2 = map2(x,0,255,x0,x0+side)
	y2 = map2(y,255,0,y0,y0+side)
	print(x2, y2)
	pygame.draw.circle(window, pygame.Color(255,128,0), [x2, y2], 6, 0)
	pygame.display.update()

def setup_pygame():
	global window, res, width, height
	pygame.init()
	res = (1920, 1080)
	width, height = res
	window = pygame.display.set_mode(res, pygame.FULLSCREEN)
	#window.fill(pygame.Color(255,255,255))

	global x0, y0, side
	side = height-20
	x0 = int(width/2-side/2)
	y0 = 10
	pygame.draw.rect(window, pygame.Color(0,255,0), [x0,y0,side,side], 3)
	pygame.draw.line(window, pygame.Color(0,255,0), [x0+side/2,y0], [x0+side/2,y0+side], 1)
	pygame.draw.line(window, pygame.Color(0,255,0), [x0,y0+side/2], [x0+side,y0+side/2], 1)

def setup_ADC():
	ADC.setup(0x48)					# Setup PCF8591

def display():
	x,y,b = ADC.read(0), ADC.read(1), ADC.read(2)
	dot(y,x)

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

