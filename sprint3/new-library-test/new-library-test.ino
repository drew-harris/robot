#include "KK_Robot.h"

Robot* robot;
void setup() {
  robot = new Robot(2, 38, 30, 99, 44);
  robot->turnNav(0);
  robot->go(90, 30);

}

void loop() {
  
}
