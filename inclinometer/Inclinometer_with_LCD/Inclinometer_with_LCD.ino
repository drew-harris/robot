 #include <LiquidCrystal_I2C.h>

int lcdAddress = 0x3F;
int loopCount = 0;

LiquidCrystal_I2C *lcd;

void setup() {
  lcd = new LiquidCrystal_I2C(lcdAddress, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
  lcd->begin(14, 2); // initialize the lcd. Don't worry about the int values above.
  delay(3000);                       // Let the message show for 3 seconds
  Serial.begin(9600);
}
void loop() {
 int sensorValue = analogRead(A1);
 int angle = sensorValue * -0.2687 + 141.25;
 Serial.print(angle);
 Serial.println(" degrees \t");
 lcd->print(angle);
 lcd->println(" degrees \t");
 delay(500);
 
}
