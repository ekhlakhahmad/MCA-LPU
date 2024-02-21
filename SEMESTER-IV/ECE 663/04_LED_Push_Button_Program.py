from machine import Pin
from time import sleep

button = Pin(4, Pin.IN)
led = Pin(5, Pin.OUT)

while True:
  state = button.value()
  
  if state == True:
    led.value(1)
    
  else:
    led.value(0)

