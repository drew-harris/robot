#include <KNWRobot.h>
#include <conductivity.h>

KNWRobot * robot;

void setup() {
  // robot setup
  robot = new KNWRobot();
}

void loop() {
  int adc,i;
  double mean;

  adc = 0;
  
  // averaging 5 ADC readings
  for (i = 0; i < 5; i++) {
    adc += robot->getConductivity();  
  }
  mean = (double)adc / 5.0;
  robot->clearLine(1);
  //robot->printLCD(mean); //printing ACD code to LCD
  Serial.println(mean); //printing to serial
  delay(1000); //wait for 1 second
}
