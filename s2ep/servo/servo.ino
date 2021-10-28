#include <Servo.h>
#include <LiquidCrystal_I2C.h>
//TEst

int lcdAddress = 0x27;
int loopCount = 0;
LiquidCrystal_I2C *lcd;

Servo myservo;

void setup() {
  myservo.attach(11);
  lcd = new LiquidCrystal_I2C(lcdAddress, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
  lcd->begin(16, 2); // initialize the lcd. Don't worry about the int values above.
  lcd->home();       // go to the top line
  lcd->print("HI CULLEN"); // Print a welcome message
  delay(300);
}

void loop() {
  myservo.write(0);
  lcd->begin(16, 2); // initialize the lcd. Don't worry about the int values above.
  lcd->home();       // go to the top line
  lcd->print("180"); // Print a welcome message
  delay(1000); 
  myservo.write(0);
  lcd->begin(16, 2); // initialize the lcd. Don't worry about the int values above.
  lcd->home();       // go to the top line
  lcd->print("0"); // Print a welcome message
  delay(1000);    
}
