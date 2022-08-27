from machine import Pin, lightsleep

pins = [Pin(i, Pin.OUT) for i in range(0, 28+1)]

prev_pin = pins[-1]
while True:
    for i, pin in enumerate(pins):
        print(i)
        prev_pin.value(0)
        pin.value(1)
        prev_pin = pin
        lightsleep(500)