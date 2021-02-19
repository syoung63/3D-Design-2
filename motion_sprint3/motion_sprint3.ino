
#include <Servo.h>

Servo servo1;  // create servo object to control a servo

int pos = 0;    // variable to store the servo position

void setup() {
  servo1.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {

  if(pos == 0){
    servo1.write(180);
  }

}
