#include "KK_Nav.h"
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C *lcd;

int lcdAddress = 0x3F;
Navigation* nav;

void setup() {
  nav = new Navigation(11, 24, 22, 99);
  lcd = new LiquidCrystal_I2C(lcdAddress, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

  lcd->begin(14, 2);
  nav->goToAngle(0);
  double centimeters = nav->measureDistance();

  lcd->print(centimeters);
}

void loop() {
  double centimeters = nav->measureDistance();

  lcd->clear();
  lcd->print(centimeters);

  delay(200);
}
