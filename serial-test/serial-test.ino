#include "KNWRobot.h"

KNWRobot* robot;
int inclineReading = 0;
bool success = robot->setupIncline(1);
void setup() {
  Serial.begin(9600);
}
void loop() {
  if (success) {
    inclineReading = robot->getIncline();
    Serial.println(inclineReading);
    Serial.println("hi");
    delay(2000);
  }
  Serial.println("hi2");
  delay(2000);
}
