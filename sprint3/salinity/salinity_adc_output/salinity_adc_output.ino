#include <LiquidCrystal_I2C.h>
#include <conductivitynew.h>

int lcdAddress = 0x3F;
int loopCount = 0;

double slope = 12.884;
double intercept = 172.341;

LiquidCrystal_I2C *lcd;

void setup() {
  lcd = new LiquidCrystal_I2C(lcdAddress, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
  lcd->begin(14,2);
  // serial setup with baudrate of 9600
  Serial.begin(9600);
}

void loop() {
  int adc;
  double salinity;

  lcd->home();
  lcd->println("Salinity: ");

  //calculating salinity
  adc = getConductivity();
  salinity = slope / (adc - intercept);
  
  //printing out salinity
  Serial.println(salinity); //printing to serial
  lcd->println(salinity);
  delay(100); //wait for 0.1 second
}
