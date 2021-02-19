
#include <Servo.h>

#include <Adafruit_NeoPixel.h>

Servo myservo;  // create servo object to control a servo

int pos = 0;    // variable to store the servo position

#define LED_PIN    6

#define LED_COUNT 4

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB);

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  strip.begin();           // Initalize NeoPixel strip object
  strip.show();            
  strip.setBrightness(70);
}

void loop() {
  colorWipe(strip.Color(221,18,228), 1000); 
  
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
   
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}


  
void colorWipe(uint32_t color, int wait) {
  for(int i=0; i<strip.numPixels(); i++) { // For each pixel in strip...
    strip.setPixelColor(i, color);         //  Set pixel's color
    strip.show();                          //  Update strip to match
    delay(wait);                           //  Pause
  }
}
