#ifndef KK_Movement_h
#define KK_Movement_h
#include "Arduino.h"
#include <Servo.h>


class OmniMove {
  public:
    void go(int angle, int speed);
    void stop();
    void turnInPlace();
    void turn(int angle);
    void yeet();
    OmniMove();

  private:
    int _flPin;
    int _frPin;
    int _brPin;
    int _blPin;
    Servo flMotor;
    Servo frMotor;
    Servo brMotor;
    Servo blMotor;

    int _speed = 0;
    int _direction = 0;
    int motorControl(Servo& motor, double speed);

    int correctAngle(int inputAngle);
};

#endif
