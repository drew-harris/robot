#include "Arduino.h"
#include <Servo.h>
#include "KK_Movement.h"


//3 5 6 9

// Dont go over 1.4 if speed is 70
const double flOffset = 1.09;
const double frOffset = 1;
const double brOffset = 1.0;
const double blOffset = 1;

const double bwOffset = 0.8;

OmniMove::OmniMove() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  _flPin = 3;
  _frPin = 5;
  _brPin = 6;
  _blPin = 9;

  flMotor.attach(_flPin);
  frMotor.attach(_frPin);
  brMotor.attach(_brPin);
  blMotor.attach(_blPin);
}

int OmniMove::motorControl(Servo& motor, double speed) {
  motor.write(map(speed, -100, 100, 1000, 2000));
}

int OmniMove::correctAngle(int inputAngle) {

  // TODO: Fix me to allow extreme turns
  if (inputAngle < 0) {
    inputAngle += 360.0;
  }
  if (inputAngle > 360) {
    inputAngle -= 360.0;
  }


  if (inputAngle >= 337.5 || inputAngle < 22.5) {
    return 0;
  } else if (inputAngle >= 22.5 && inputAngle < 67.5 ) {
    return 45;
  } else if (inputAngle >= 67.5 && inputAngle < 112.5 ) {
    return 90;
  } else if (inputAngle >= 112.5 && inputAngle < 157.5 ) {
    return 135;
  } else if (inputAngle >= 157.5 && inputAngle < 202.5 ) {
    return 180;
  } else if (inputAngle >= 202.5 && inputAngle < 247.5 ) {
    return 225;
  } else if (inputAngle >= 247.5 && inputAngle < 292.5 ) {
    return 270;
  } else if (inputAngle >= 292.5 && inputAngle < 337.5 ) {
    return 315;
  }

}


void OmniMove::go(int angle, int speed) {
  switch(correctAngle(angle)) {
    // Forward
    case 0:
      motorControl(flMotor, speed * 1.09 );
      motorControl(frMotor, -speed * frOffset);
      motorControl(brMotor, -speed * brOffset);
      motorControl(blMotor, speed * blOffset);
      break;

    // Forward diagonal right
    case 45:
      motorControl(flMotor, speed * flOffset);
      motorControl(frMotor, 0);
      motorControl(brMotor, -speed * brOffset);
      motorControl(blMotor, 0);

      break;
    
    // Right
    case 90:
      motorControl(flMotor, speed * 1.2);
      motorControl(frMotor, speed * frOffset);
      motorControl(brMotor, -speed * brOffset);
      motorControl(blMotor, -speed * blOffset);

      break;

    // backward diagonal right
    case 135:
      motorControl(flMotor, 0);
      motorControl(frMotor, speed * frOffset);
      motorControl(brMotor, 0);
      motorControl(blMotor, -speed * blOffset);

      break;

    // Backward
    case 180:
      motorControl(flMotor, -speed * 0.8);
      motorControl(frMotor, speed * 1);
      motorControl(brMotor, speed * brOffset);
      motorControl(blMotor, -speed * blOffset);
      break;

    // Backward diagnonal left
    case 225:
      motorControl(flMotor, -speed * bwOffset);
      motorControl(frMotor, 0);
      motorControl(brMotor, speed * brOffset);
      motorControl(blMotor, 0);

      break;

    // Left
    case 270:
      motorControl(flMotor, -speed * 1.1);
      motorControl(frMotor, -speed * 0.5);
      motorControl(brMotor, speed * brOffset);
      motorControl(blMotor, speed * 0.5);

      break;

    // Forward diagonal left
    case 315:
      motorControl(flMotor, 0);
      motorControl(frMotor, -speed * frOffset);
      motorControl(brMotor, 0);
      motorControl(blMotor, speed * blOffset);

      break;
    default:
      break;
  }

}

void OmniMove::turnRobot(int angle) {
  int direction = 1;
  if (angle > 180) {
    direction *=-1;
  }
  motorControl(flMotor, 20 * direction);
  motorControl(frMotor, 20 * direction);
  motorControl(brMotor, 20 * direction);
  motorControl(blMotor, 20 * direction);
  delay( angle * 5.35);

  stop();
}


void OmniMove::stop() {
  motorControl(flMotor, 0);
  motorControl(frMotor, 0);
  motorControl(brMotor, 0);
  motorControl(blMotor, 0);
}

void OmniMove::yeet() {
               //yeet
 motorControl(   flMotor , 90) /*yeet*/  ; /*yeet*/motorControl(  frMotor,           90);/*yeet*/motorControl(                      brMotor  , 90 * 2 /2);
 motorControl(                               blMotor,90 *   1 *                     1);/**/delay(2000 + 1 /1 + 1/1);   motorControl(flMotor   ,-1 *    100);

 //        ██╗░░░██╗███████╗███████╗████████╗
 //         ╚██╗░██╔╝██╔════╝██╔════╝╚══██╔══╝
 //         ░╚████╔╝░█████╗░░█████╗░░░░░██║░░░
 //         ░░╚██╔╝░░██╔══╝░░██╔══╝░░░░░██║░░░
 //         ░░░██║░░░███████╗███████╗░░░██║░░░
 //         ░░░╚═╝░░░╚══════╝╚══════╝░░░╚═╝░░░
 /*yeet*/motorControl(frMotor,  100)/*yeet                                                          yeet*/; /*yeet*/motorControl(brMotor,100);motorControl(blMotor,-100);delay(3000);stop();
// drew wuz here
}
