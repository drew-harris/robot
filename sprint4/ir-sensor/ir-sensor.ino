#include "KK_Robot.h"

Robot* robot;
bool slowed = false;
void setup() {
  // servo, trigger, echo, ir, salinity servo
  robot = new Robot(2, 38, 30, 26, 44);
  robot->turnNav(0);

  robot->go(90, 30);
  while (true) {
    slowed = !slowed;
    if (slowed) {
      robot->go(90, 30);
    } else {
      robot->stop();
    }

    if (robot->getLetters()[0] == 'x') {
      robot->stop();
      break;
    }
    
    robot->print(String (robot->getLetters()[0]));
    delay(100);
  }

}

void loop() {
}
