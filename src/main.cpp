// source taken here https://github.com/earlephilhower/arduino-pico/discussions/756

#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
#include <NeoPixelConnect.h>

// comment to skip bug
//#define DEBUGME

#define PIN_IBUS_SRV_RX (11u)
SerialPIO iBusSerial_IN(SerialPIO::NOPIN, PIN_IBUS_SRV_RX);

NeoPixelConnect p(PIN_NEOPIXEL, 1);
#define MAX_INTENSITY 5
#define RND_BRIGHT ((uint8_t)random(0, MAX_INTENSITY))
#define SHOW_RND_PIXEL p.neoPixelSetValue(0, RND_BRIGHT, RND_BRIGHT, RND_BRIGHT, true);
#define SHOW_NO_PIXEL p.neoPixelClear();

void setup1()
{
    Serial.begin(115200);
    while (!Serial)        delay(100); // WARNING: this blocks as long no device connects to Serial!

    delay(2000);
    Serial.println("exit setup1");
}

void loop1()
{
    Serial.print("1");
    delay(150);
}

void setup()
{
    Serial.begin(115200);
    while (!Serial)  delay(100); // WARNING: this blocks as long no device connects to Serial!

#ifdef DEBUGME
    iBusSerial_IN.begin(115200);// as soon as this is uncommented the core stops working
#endif

    delay(2000);
    Serial.println("exit setup0");
}

void loop()
{
    SHOW_RND_PIXEL
    delay(100);
    SHOW_NO_PIXEL
    delay(50);
    Serial.print("0");
}