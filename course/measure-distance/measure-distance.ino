
#include "KK_Robot.h"
const byte triggerPin = 51;
const byte echoPin = 53;


Robot* robot;
void setup() {
    robot = new Robot(2, 51, 53, 99, 44);
    robot->turnNav(0);


    while (true) {
      robot->print(String (robot->measureDistance()));
      delay(200);
                
    }

          
}

void loop() {
    
    
}

