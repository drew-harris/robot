#include "KK_Robot.h"

Robot* robot;
void setup() {
  // servo, trigger, echo, ir, salinity servo
  robot = new Robot(2, 53, 51, 26, 44);
  robot->turnNav(0);

  // go to first wall  
  robot->go(0, 30);
   while (robot->measureDistance() > 3000) {
    
    delay(50);
  }
 
  robot->stop();
  delay(2000);

  // find first hole
  robot->go(270);
  while (robot->measureDistance() < 3000) {
    
    delay(50);
  }
  robot->stop();
  delay(2000);

  
  // go to second wall
  robot->go(0);
  while (robot->measureDistance() > 3000) {
    
    delay(50);
  }
  robot->stop();
  delay(2000);

  // find second hole
  robot->go(270);
  while (robot->measureDistance() < 3000) {
    
    delay(50);
  }
  robot->stop();
  delay(2000);

  robot->go(0);
  delay(2000);
}  
void loop() {

  
}
