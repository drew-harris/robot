#include <Servo.h>

/*
=============================================================================
=============================================================================
===                            IMPORTANT!!!!!!!!                           ==
=== AT THE BOTTOM OF SERIAL SETTINGS MAKE SURE "NO LINE ENDING IS SELECTED ==
=============================================================================
=============================================================================
 - Drew
*/

Servo myServo;

void setup() {
  myServo.attach(6);
  Serial.begin(9600);
  while (!Serial) {
  }

}


void loop() {
  while(Serial.available() > 0) {
    int num = Serial.parseInt();
    Serial.println(num);
    myServo.write(num);
    delay(200);
  }

}
