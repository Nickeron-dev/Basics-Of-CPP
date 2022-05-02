from gpiozero import AngularServo
from time import sleep

servo = AngularServo(22, min_pulse_width=0.0006, max_pulse_width=0.0023) // oder 17 oder 27

while (True):
	servo.angle = 90
	sleep(2)
	servo.angle = 0
	sleep(2)
	servo.angle = -90
	sleep(2)
