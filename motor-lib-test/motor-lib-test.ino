#include "KK_Movement.h"

void setup() {
  OmniMove movement;
  // Forward
  movement.go(45, 100);
  delay(2000);
  movement.stop();
  delay(2000);

  // Right
  movement.go(135, 100);
  delay(2000);
  movement.stop();
  delay(2000);

  // Back
  movement.go(225, 100);
  delay(2000);
  movement.stop();
  delay(2000);

  // Left
  movement.go(315, 100);
  delay(2000);
  movement.stop();
  delay(2000);
}

void loop() {

}
