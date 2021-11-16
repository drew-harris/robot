#include <Servo.h>
#include "KK_Nav.h"


void setup() {
  Navigation nav(6);
  //nav.goToAngle(360);
  //delay(2000);
  nav.turnRight();
}

void loop() {
}
