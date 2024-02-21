from machine import Pin
from time import sleep

Red_LED = Pin(4, Pin.OUT)
Gree_LED = Pin(5, Pin.OUT)
Yellow_LED = Pin(5, Pin.OUT)

Red_LED.value(0)
Gree_LED.value(0)
Yellow_LED.value(0)

while True:
  Red_LED.value(1)
  Gree_LED.value(0)
  Yellow_LED.value(0)
  sleep(0.5)
  
  Red_LED.value(0)
  Gree_LED.value(1)
  Yellow_LED.value(0)
  sleep(0.5)
  
  Red_LED.value(0)
  Gree_LED.value(0)
  Yellow_LED.value(1)
  sleep(0.5)
  
  
  

