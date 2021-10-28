#include <KNWRobot.h>
#include <conductivity.h>

KNWRobot *robot;

void setup() {
  // robot setup
  robot = new KNWRobot();
  // serial setup with baudrate of 9600
  Serial.begin(9600);
}

void loop() {
  int adc;
  double mean;

  adc = 0;
  
  // averaging 5 ADC readings
  for (int i = 0; i < 5; i++) {
    adc += robot->getConductivity();
  }
  mean = (double)adc / 5.0;
  robot->clearLine(1);
  robot->printLCD(mean); //printing ACD code to LCD
  Serial.println(mean); //printing to serial
  delay(1000); //wait for 1 second
}
