#include "Arduino.h"
#include <Servo.h>
#include "KK_Nav.h"
#include "infraredsensor.h"

int DEGREE_DELAY = 273;

Navigation::Navigation(int servoPin, int echoPin, int trigPin, int irPin) {
  navServo;


  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  _servoPin = servoPin;
  _trigPin = trigPin;
  _echoPin = echoPin;
  _irPin = irPin;
  navServo.attach(_servoPin);

}


// Add a delay after in the main code
void Navigation::goToAngle(int angle) {
  _angle = angle;
  navServo.write(_angle);
}

double Navigation::measureDistance() {
  long duration;
  long distance;

  digitalWrite(_trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(_trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(_trigPin, LOW);

  duration = pulseIn(_echoPin, HIGH);

  distance = duration * 0.034 / 2;
  return distance;
}

// TODO: Check this before merge
char* Navigation::getLetters() {
  int numCharsReadFromIR = scanIR(_irPin);
  char* characters = getIR();

  return characters;
}


int Navigation::getAngle() {
  return _angle;
}

