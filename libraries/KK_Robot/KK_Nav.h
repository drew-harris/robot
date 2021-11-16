#ifndef KK_Nav_h
#define KK_Nav_h

#include "Arduino.h"
#include <Servo.h>

class Navigation {
  public: 
    Navigation(int servoPin, int trigPin, int echoPin, int irPin);
    void turnNav(int angle);
    int getAngle();
    double measureDistance();
    char* getLetters();
  private:
    int _servoPin;
    int _angle = 0;
    int _irPin;
    int _trigPin;
    int _echoPin;

    Servo navServo;
};

#endif
