#include "Arduino.h"
#include <Servo.h>
#include "KK_Nav.h"
#include "infraredsensor.h"

int DEGREE_DELAY = 273;

Navigation::Navigation(int servoPin, int echoPin, int trigPin, int irPin) {

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
  if (angle > 180) {
    angle -= 360;
  }
  angle = map(angle, 90, -90, 0, 180);
  navServo.write(angle);
  _angle = angle;
}

double Navigation::measureDistance() {
  long duration; // variable for the duration of sound wave travel
  double distance; // variable for the distance measurement
  digitalWrite(_trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(_trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(_trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(_echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
  return duration;
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

