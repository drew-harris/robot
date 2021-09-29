#include <vexMotor.h>
int motorPin = 3;
 
vexMotor myVexMotor1;
void setup() { 

vexMotor.attach(3);

} 
 
void old() {

}

void loop() { 
  if (Serial.available()) {
    int speed = Serial.parseInt();
      Serial.println(speed);
      vexMotor.write(speed);
    delay(200);
  }
} 
