#include "KK_Robot.h"

Robot* robot;
void setup() {
  robot = new Robot(2, 38, 30, 99, 44);
  robot->turnNav(0);

  // First turn
  while (robot->measureDistance() < 3000) {
    robot->go(90, 30);
    delay(50);
  }
  robot->stop();
  delay(1000);

  robot->go(0, 30);
}

void loop() {
  
}
