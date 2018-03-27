#!/usr/bin/python
# m1.py
# Essais avec un mcp3008 en python
# From http://www.raspberrypi-spy.co.uk/2013/10/analogue-sensors-on-the-raspberry-pi-using-an-mcp3008/
# 2016-05-15    PV
 
import spidev
import time
import os
 
# Open SPI bus
spi = spidev.SpiDev()
spi.open(0,0)
 
# Function to read SPI data from MCP3008 chip
# Channel must be an integer 0-7
def ReadChannel(channel):
  adc = spi.xfer2([1,(8+channel)<<4,0])
  data = ((adc[1]&3) << 8) + adc[2]
  return data

# Define delay between readings
delay = 0.5
 
while True:
 
  # Read sensor data
  level0 = ReadChannel(0)
  level1 = ReadChannel(1)
  level2 = ReadChannel(2)
  level3 = ReadChannel(3)
 
  # Print out results
  print("Levels: {0:4d} {1:4d} {2:4d} {3:4d}".format(level0, level1, level2, level3))
 
  # Wait before repeating loop
  time.sleep(delay)
