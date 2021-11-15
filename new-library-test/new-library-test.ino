#include "KK_Robot.h"

Robot* robot;
void setup() {
  robot = new Robot(2, 99, 99, 99, 44);
  robot->turnNav(0);

}

void loop() {
}
