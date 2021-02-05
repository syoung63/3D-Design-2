
 
#include <Adafruit_NeoPixel.h>
 
#define LED_PIN 6
#define LED_COUNT 4
 
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB);
 
void setup() {
  strip.begin();
  strip.show();
  strip.setBrightness(70); 
}
 
void loop() {
  colors(strip.Color(255, 0, 255)); // Magenta
  colors(strip.Color(255, 0, 100)); // Pink
  colors(strip.Color(255, 100, 0)); // Orange
  colors(strip.Color(255, 200, 0)); // Yellow
  colors(strip.Color(140, 255, 0)); // Green
  colors(strip.Color(0, 255, 255)); // Cyan
  colors(strip.Color(0, 0, 255)); // Blue
}
 
void colors(uint32_t color) { 
  for(uint16_t i=0; i<strip.numPixels()+1; i++) {
      strip.setPixelColor(i ,color); // Draw another pixel
      strip.setPixelColor(i-1, 0); // Erase last pixel
      strip.show();
      delay(280);
  }
}
