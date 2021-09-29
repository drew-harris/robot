#include <vexMotor.h>
int motorPin = 3;
 
vexMotor myVexMotor1;
void setup() { 

myVexMotor1.attach(3);
myVexMotor1.write(100);

} 
 

void loop() { 
} 
