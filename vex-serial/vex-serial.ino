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


int motorPin = 3;
Servo vexMotor;

int motorControl (int value) {
  vexMotor.write(map(value,-100,100,1000,2000));
}

void setup() {
  pinMode(motorPin, OUTPUT);
  vexMotor.attach(motorPin);
  Serial.begin(9600);
  while (!Serial) {
  }

}


void loop() {
  while(Serial.available() > 0) {
    int num = Serial.parseInt();
    Serial.println(num);
    motorControl(num);
    delay(200);
  }

}
