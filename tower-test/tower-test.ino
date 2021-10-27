#include "KK_Nav.h"

// TODO: CHANGE THESE!!!
// servo pin, trig pin, echoPin, irPin
Navigation nav(4, 5, 7, 2);
void setup() {
  nav.goToAngle(90);
  nav.goToAngle(0);

}

void loop() {

}
