#include "KK_Robot.h"

Robot* robot;
void setup() {
  // put your setup code here, to run once:
  // servo, trigger, echo, ir, salinity servo
  robot = new Robot(2, 53, 51, 26, 44);
  robot->pullUpSalinity();
        
}
void loop() {
}
