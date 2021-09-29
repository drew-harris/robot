#include <Servo.h>

Servo myservo;  // create servo object to control a servo

void setup() {
  myservo.attach(6);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  myservo.write(90);                  // sets the servo position according to the scaled value
  delay(1000); 
  myservo.write(0);                  // sets the servo position according to the scaled value
  delay(1000);    
  // waits for the servo to get there
}
