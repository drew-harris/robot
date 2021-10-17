#ifndef KK_Nav_h
#define KK_Nav_h

#include "Arduino.h"
#include <Servo.h>

class Navigation {
  public: 
    Navigation(int pin);
    void goToAngle(int angle);
    void turnRight();
    void turnLeft();
  private:
    int _servoPin;
    int _angle = 0;
    Servo navServo;
};

#endif
