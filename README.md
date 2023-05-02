# small test project

## checking compatibility of Neopixel libraries while simultanously using SerialPIO with RP2040 and earlephilhower Arduino core.

Candidates:

* mryslab/NeoPixelConnect @ ^1.2.0

kills SerialPIO because lacking usage of framework for state machine resulting in stop of loop()


* Adafruit/Adafruit NeoPixel @ ^1.11.0

loop() works - TODO: check that SerialPIO receives data

