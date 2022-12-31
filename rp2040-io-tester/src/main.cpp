#include <Arduino.h>
// #include <pico/stdio_usb.h>
#include "pico/stdlib.h"

int pin_value[29];

void setup()
{
  stdio_init_all();
  for (int pin = 0; pin < 29; pin++)
  {
    pinMode(pin, INPUT_PULLUP);
    pin_value[pin] = HIGH;
  }
}

void loop()
{
  for (int pin = 0; pin < 29; pin++)
  {
    int v = digitalRead(pin);
    if (pin_value[pin] != v)
    {
      if (v == HIGH)
      {
        printf("pin %2d HIGH\r\n", pin);
      }
      else
      {
        printf("pin %2d LOW\r\n", pin);
      }
      pin_value[pin] = v;
    }
  }
  sleep_ms(100);
}
