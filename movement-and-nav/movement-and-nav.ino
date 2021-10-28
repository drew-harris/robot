#include "KK_Movement.h"
#include "KK_Nav.h"

OmniMove* movement;
Navigation* nav;
boolean stop;

boolean forwardTripped;


void setup() {
  movement = new OmniMove();
  nav = new Navigation(11, 24, 22, 99);
  nav->goToAngle(90);
  stop = false;
  delay(2000);
  while (nav->measureDistance() > 4000 && nav->measureDistance() > 1) {
    movement->go(0, 50);
  }
  movement->stop();
  nav->goToAngle(0);
  delay(2000);
  while (nav->measureDistance() > 4000 && nav->measureDistance() > 1) {
    movement->go(90, 50);
  }
  movement->stop();
}


void loop() {
}
