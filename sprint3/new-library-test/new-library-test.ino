#include "KK_Robot.h"

Robot* robot;
void setup() {
  robot = new Robot(2, 38, 30, 99, 44);
  robot->turnNav(0);
  robot->go(0, 30);
  delay(5000);
  robot->stop();

}

void loop() {
  
}
