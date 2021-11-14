#include "KK_Movement.h"
#include "KK_Nav.h"

OmniMove* movement;
Navigation* nav;
void setup() {
  movement = new OmniMove();
  nav = new Navigation(2, 99, 99, 99);

  delay(4000);

}

void loop() {
  movement->go(0, 30);
  delay(1000);
  movement->stop();
  delay(1000);
  movement->turn(90);
  delay(3000);
  movement->go(0, 30);
  delay(1000);
  movement->stop();
  delay(1000);
  movement->turn(90);
  delay(3000);
  movement->go(0, 30);
  delay(1000);
  movement->stop();
  delay(1000);
  movement->turn(90);
  delay(3000);
  movement->go(0, 30);
  delay(1000);
  movement->stop();
  delay(1000);
  movement->turn(90);
  delay(3000);

}
