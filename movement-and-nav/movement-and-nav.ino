#include "KK_Movement.h"
#include "KK_Nav.h"

OmniMove* movement;
Navigation* nav;
boolean stop;

boolean forwardTripped;


void setup() {
  movement = new OmniMove();
  nav = new Navigation(2, 99, 99, 99);
  nav->goToAngle(270);
  delay(2000);
}


void loop() {
}
