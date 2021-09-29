#include <Servo.h>

Servo myservo;

void setup() {
  myservo.attach(6);
}

void loop() {
  myservo.write(90);
  delay(1000); 
  myservo.write(0);
  delay(1000);    
}
