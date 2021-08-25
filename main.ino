#include <Adafruit_NeoPixel.h>

#define PIXEL_PIN 2	 // input pin Neopixel is attached to
#define NUMPIXELS 56// number of neopixels in strip

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIXEL_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.setBrightness(255);
  pixels.begin();
}

void loop() {
  for(int i = 0; i < NUMPIXELS; i++)
  {
    pixels.setPixelColor(i, pixels.Color(255,0,0)); //Vermelho
    pixels.show();
  }
}
