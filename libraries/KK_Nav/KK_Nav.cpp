#include "Arduino.h"
#include <Servo.h>
#include "KK_Nav.h"

int DEGREE_DELAY = 273;

Navigation::Navigation(int pin) {
  navServo;
  pinMode(pin, OUTPUT);
  _servoPin = pin;
  navServo.attach(_servoPin);
}

void Navigation::turnRight() {
  _angle += 90;
  navServo.write(180);
  delay(DEGREE_DELAY); 
  navServo.write(90);
}

void Navigation::turnLeft() {
  _angle -= 90;
  navServo.write(0);
  delay(DEGREE_DELAY); 
  navServo.write(90);
}

void Navigation::goToAngle(int angle) {
  if (angle > _angle) {
    int turns = (angle - _angle) / 90;
    for (int i = 0; i < turns; ++i) {
      turnRight();
      delay(100);
    }
  } else if (angle < _angle) {
    int turns = (_angle - angle) / 90;
    for (int i = 0; i < turns; ++i) {
      turnLeft();
      delay(600);
    }

  }

}
