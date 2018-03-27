#!/usr/bin/env python
import RPi.GPIO as GPIO

BtnPin = 11
Gpin   = 12
Rpin   = 13

def setup():
	GPIO.setmode(GPIO.BOARD)       # Numbers GPIOs by physical location
	GPIO.setup(Gpin, GPIO.OUT)     # Set Green Led Pin mode to output
	GPIO.setup(Rpin, GPIO.OUT)     # Set Red Led Pin mode to output
	GPIO.setup(BtnPin, GPIO.IN, pull_up_down=GPIO.PUD_UP)    # Set BtnPin's mode is input, and pull up to high level(3.3V)
	GPIO.add_event_detect(BtnPin, GPIO.BOTH, callback=detect, bouncetime=150)
	GPIO.output(Gpin, GPIO.HIGH)   # Green led on
	GPIO.output(Rpin, GPIO.LOW)    # Red led off

def Led(x):
	if x == 0:					   # Button pressed
		GPIO.output(Rpin, 1)
		GPIO.output(Gpin, 0)
	else:
		GPIO.output(Rpin, 0)
		GPIO.output(Gpin, 1)

def Print(x):
	pass
	#if x == 0:
	#	print '    ***********************'
	#	print '    *   Button Pressed!   *'
	#	print '    ***********************'

def detect(chn):
	print("Detect chn=",chn," state=",GPIO.input(chn))
	Led(GPIO.input(BtnPin))
	Print(GPIO.input(BtnPin))

def loop():
	while True:
		pass

def destroy():
	GPIO.output(Gpin, GPIO.LOW)       # Green led off
	GPIO.output(Rpin, GPIO.LOW)       # Red led off
	GPIO.cleanup()                     # Release resource

if __name__ == '__main__':     # Program start from here
	setup()
	try:
		loop()
	except KeyboardInterrupt:  # When 'Ctrl+C' is pressed, the child program destroy() will be  executed.
		destroy()

