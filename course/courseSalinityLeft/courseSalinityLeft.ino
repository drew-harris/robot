#include "KK_Robot.h"

Robot* robot;
void setup() {
  // servo, trigger, echo, ir, salinity servo
  robot = new Robot(2, 51, 52, 26, 44);
  robot->turnNav(0);

  // First turn  
  robot->go(270, 30);
  while (robot->measureDistance() < 2000) {
    
    delay(50);
  }
  robot->stop();
  delay(1000);
  robot->turnRobot(30);
  delay(1000);

  // go forward a certain distance
  robot->go(0, 30);
  delay(1100);
  robot->stop();
  delay(1000);
  robot->turnRobot(37);
  delay(1000);


  /*while(robot->getLetters()[0]!='V'&&robot->getLetters()[1]!='V'&&robot->getLetters()[2]!='V'){*/
    /*robot->go(90,30);*/
    /*delay(150);*/
    /*robot->stop();*/
  /*}*/

  robot->stop();
  delay(1000);


  // go right a tad
   robot->go(90,30);
  delay(200);
  robot->stop();
  delay(2000);
  
  // go up half of ramp
  robot->go(0,30);
  delay(1500);
  robot->stop();
  delay(2000);
  
  // get incline off adc
  //robot->print(String (robot->getIncline()+5));
  delay(2000);

  // go up half of ramp
  robot->go(0,30);
  delay(1000);
  robot->stop();
  delay(2000);

  robot->pullUpSalinity();

  

}  
void loop() {

  
}
