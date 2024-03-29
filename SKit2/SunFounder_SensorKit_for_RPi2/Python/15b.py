#!/usr/bin/env python
#------------------------------------------------------
#
#		This is a program for JoystickPS2 Module.
#
#		This program depend on PCF8591 ADC chip. Follow 
#	the instruction book to connect the module and 
#	ADC0832 to your Raspberry Pi.
#
#------------------------------------------------------
import PCF8591 as ADC 
import time

def setup():
	ADC.setup(0x48)					# Setup PCF8591

def loop():
	x,y,b = ADC.read(0), ADC.read(1), ADC.read(2)
	print 'X={0:3d}  Y={1:3d}  B={2:3d}'.format(x,y,b)

def destroy():
	pass

if __name__ == '__main__':		# Program start from here
	setup()
	try:
		while True:
			loop()
	except KeyboardInterrupt:  	# When 'Ctrl+C' is pressed, the child program destroy() will be  executed.
		destroy()
