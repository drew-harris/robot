#include "KK_Nav.h"

// TODO: CHANGE THESE!!!
// servo pin, trig pin, echoPin, irPin


Navigation* nav;

void setup() {
  nav = new Navigation(11, 22, 24, 99);

  nav->goToAngle(0);


}

void loop() {


}
