#include libraries

Navigation nav;
OmniMove movement;

void setup() {
  double distance;
  movement = new OmniMove();
  nav = new Navigation(11, 24, 22, 99);

  // orient sensor facing right
  nav->goToAngle(90);
  while (ir sensor not detecting M)
    movement.move(90, 20);

  delay(2000);

  // scan in direction of beacons and store value
  movement.move(stored value);


}
