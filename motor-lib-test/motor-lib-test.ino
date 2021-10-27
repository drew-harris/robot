#include "KK_Movement.h"

void setup() {
  OmniMove movement;
  // Forward
  movement.go(0, 50);
  delay(1000);
  movement.go(90, 50);
  delay(1000);
  movement.go(180, 50);
  delay(1000);
  movement.go(270, 50);
  delay(1000);
  movement.stop();
}

void loop() {

}
