#include "KK_Robot.h"

Robot* robot;
void setup() {
  // servo, trigger, echo, ir, salinity servo
  robot = new Robot(2, 51, 52, 26, 44);
  robot->turnNav(0);

  //goOverBridge();
  delay(2000);



//  // First turn  
  robot->go(0);
  while (robot->measureDistance() > 3200) {
    delay(50);
  }
  robot->stop();
  delay(1000);
  robot->turnRobot(20);
  delay(1000);

  robot->go(270);

  while(robot->measureDistance() < 5000) {
    delay(100);
  }
  robot->stop();
  delay(1000);
  robot->turnRobot(20);

  delay(1000);
  robot->go(0);
  while (robot->measureDistance() > 3000) {
    delay(50);
  }
  robot->stop();
  delay(1000);

  robot->go(270);
  while(robot->measureDistance() < 5000) {
    delay(100);
  }
  robot->stop();
  delay(1000);
  robot->go(0);
  delay(1000);
  robot->stop();
  delay(1000);




}  

void goOverBridge() {
  robot->go(270, 30);
  delay(1000);
  //robot->turnRobot(10);
  robot->go(270, 28);
  delay(1300);
  robot->stop();
  delay(3000);
  robot->turnRobot(90);
  delay(100);
  robot->turnRobot(90);
  delay(100);
  robot->turnRobot(47);

}
void loop() {

  
}
