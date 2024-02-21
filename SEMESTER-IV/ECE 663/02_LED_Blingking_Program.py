from machine import Pin
from time import sleep

led = Pin(4, Pin.OUT)

while True:
  led.value(1)
  print("LED ON")
  sleep(0.5)
  led.value(0)
  print("LED OFF")
  sleep(0.5)

