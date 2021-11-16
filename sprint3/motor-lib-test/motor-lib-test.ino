#include "KK_Movement.h"
#include "KK_Nav.h"

OmniMove* movement;
Navigation* nav;
void setup() {
  movement = new OmniMove();
  nav = new Navigation(2, 99, 99, 99);

  movement->go(270, 30);
  delay(3000);
  movement->stop();
}

void loop() {
}
