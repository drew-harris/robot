#include <LiquidCrystal_I2C.h>

int lcdAddress = 0x3F;
int loopCount = 0;

LiquidCrystal_I2C *lcd;

void setup() {
  lcd = new LiquidCrystal_I2C(lcdAddress, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
  lcd->begin(16, 2); // initialize the lcd. Don't worry about the int values above.
  lcd->home();       // go to the top line
  lcd->print("HI KRUSTYKANNONS"); // Print a welcome message
  delay(3000);                       // Let the message show for 3 seconds
}

void loop() { }
