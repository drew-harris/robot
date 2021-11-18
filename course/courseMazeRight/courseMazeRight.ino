#include "KK_Robot.h"

Robot* robot;
void setup() {
  // servo, trigger, echo, ir, salinity servo
  robot = new Robot(2, 53, 51, 26, 44);
  robot->turnNav(0);

//  // First turn  
  robot->go(0);
  while (robot->measureDistance() > 3000) {
    delay(50);
  }
  robot->stop();
  delay(1000);
  robot->turnRobot(20);
  delay(1000);

  robot->go(90);

  while(robot->measureDistance() < 5000) {
    delay(100);
  }
  robot->stop();


}  
void loop() {

  
}
