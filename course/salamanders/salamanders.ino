#include "KK_Robot.h"
#include <HCSR04.h>


Robot* robot;
const byte triggerPin = 51;
const byte echoPin = 53;

void setup() {
  robot = new Robot(2, 38, 30, 99, 44);
  robot->turnNav(0);

  UltraSonicDistanceSensor distanceSensor(triggerPin, echoPin);


  // Cross bridge 

  // Move up to wall
  delay(100);
  while (distanceSensor.measureDistanceCm() > 21) {
    robot->go(0);
    delay(100);
  }
  robot->stop();
  delay(1000);

  // Move right to go through first gap
  while (distanceSensor.measureDistanceCm() < 99) {
    robot->go(90);
    delay(100);
  }
  robot->stop();
  delay(1000);

  // Go up to next wall
  while (distanceSensor.measureDistanceCm() > 31) {
    robot->go(0);
    delay(100);
  }
  robot->stop();
  delay(1000);

  // Move left to go through next gap
  while (distanceSensor.measureDistanceCm() < 3000) {
    robot->go(270);
    delay(100);
  }
  robot->stop();
  delay(1000);

}

void loop() {
  
}
