#include <LiquidCrystal_I2C.h>

int lcdAddress = 0x27;
int loopCount = 0;

LiquidCrystal_I2C *lcd;

void setup() {
  lcd = new LiquidCrystal_I2C(lcdAddress, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
  lcd->begin(16, 2); // initialize the lcd. Don't worry about the int values above.
  lcd->home();       // go to the top line
  lcd->print("SMU Lyle KNW2300"); // Print a welcome message
  delay(3000);                       // Let the message show for 3 seconds
}

void loop() {
  lcd->clear();               // Clear out the screen every iteration
  lcd->setCursor(0, 0);       // Moves the cursor to column 0, row 0
  lcd->print("Loop count:");  // Print out a title on row 0
  lcd->setCursor(0, 1);       // Moves the cursor to column 0, row 1
  lcd->print(loopCount);      // Print out the number of times we've looped

  loopCount++; // Increment the loop counter
  delay(2000);    // Delay for two seconds
}
