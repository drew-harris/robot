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


  while(robot->getLetters()[0]!='S'){
    robot->go(270,30);
    delay(100);
    robot->stop();
    delay(100);

  }
  robot->stop();

  // go up half of ramp
  robot->go(0,30);
  delay(2000);
  
  robot->stop();
  delay(2000);
  // say 15 degrees
  robot->print(String (robot->getIncline()));
  delay(2000);

  // go up rest of ramp
//  robot->go(0, 30);
//  delay(1000);
//  robot->stop();
  
}  
void loop() {

  
}
