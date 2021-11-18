#include "KK_Robot.h"

Robot* robot;
void setup() {
  // servo, trigger, echo, ir, salinity servo
  robot = new Robot(2, 53, 51, 26, 44);
  robot->turnNav(0);

  // First turn  
  robot->go(90, 30);
  while (robot->measureDistance() < 2000) {
    delay(50);
  }
  robot->stop();
  delay(1000);

  // go forward a certain distance
  robot->go(0, 30);
  delay(1000);
  robot->stop();

  while(robot->getLetters()[0]!='S'&&robot->getLetters()[1]!='S'&&robot->getLetters()[2]!='S'){
    robot->go(270,30);
    delay(150);
    robot->stop();
  }

  // go left a tad
   robot->go(270,30);
  delay(200);
  robot->stop();
  delay(2000);
  
  // go up half of ramp
  robot->go(0,30);
  delay(1500);
  robot->stop();
  delay(2000);
  
  // get incline off adc
  robot->print(String (robot->getIncline()));
  delay(2000);

  // go up half of ramp
  robot->go(0,30);
  delay(1000);
  robot->stop();

  robot->dropSalinity();
}  
void loop() {}
