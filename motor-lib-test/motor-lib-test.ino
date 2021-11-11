#include "KK_Movement.h"

void setup() {
  OmniMove movement;
  // Forward
  movement.go(0, 30);
  delay(2000);
  movement.stop();
  delay(1000);
  movement.go(45, 30);
  delay(2000);
  movement.stop();
  delay(1000);
  movement.go(225, 30);
  delay(2000);
  movement.stop();
  delay(1000);
}

void loop() {

}
