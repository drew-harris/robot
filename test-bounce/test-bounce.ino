#include "KK_Robot.h"

Robot* robot;
void setup() {
    // put your setup code here, to run once:
      // servo, trigger, echo, ir, salinity servo
        robot = new Robot(2, 53, 52, 26, 44);
        
}
void loop() {
    // put your main code here, to run repeatedly:
  robot->print(String (robot->measureDistance()));
  delay(1000);
        
}