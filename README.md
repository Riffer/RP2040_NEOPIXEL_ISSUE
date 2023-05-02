# Checking compatibility of Neopixel libraries while simultanously using SerialPIO


## mryslab/NeoPixelConnect @ ^1.2.0
* kills SerialPIO because lacking usage of framework for state machine resulting in stop of loop()

## dafruit/Adafruit NeoPixel @ ^1.11.0
* at least loop works - TODO: check that SerialPIO receives data
* 
