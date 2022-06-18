from machine import Pin
import time

pins_no = [0,1,2,3,4,5,6,7,8,9,20,21,22,23,26,27,28,29]

pins = [Pin(n,Pin.OUT) for n in pins_no]

def main():
    prev = pins[0]
    while True:
        for p in pins:
            print(p)
            prev.value(0)
            p.value(1)
            prev = p
            time.sleep(0.5)

main()
