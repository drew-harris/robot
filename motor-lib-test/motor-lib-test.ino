#include "KK_Movement.h"

void setup() {
  OmniMove movement;
  // Forward
  movement.go(0, 100);
  delay(2000);
  movement.stop();
  delay(2000);
  movement.go(0, 100);
  delay(2000);
  movement.stop();
}

void loop() {

}
