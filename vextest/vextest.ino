/* vexMotorLibraryExample.ino
 
 Upload this program to your Arduino and open up the Serial Monitor
 to manually control / specify the speed of your servo motor.
 
 This example exercises all of the methods and properties that are
 used in the vexMotor class. vexMotor uses the Servo library. You must 
 include both vexMotor.h and Servo.h.
 
 Hardware connections:
 =====================
 To connect the standard 2-wire VEX motor 393 to an Arduino requires 
 a Motor Controller 29 module. Connect the wires on the Motor Controller 
 to the Arduino with the following pins:
 
 MOTOR CONTROLLER 29  <-------->  ARDUINO
 ============================================= 
 WHITE (signal)           Digital pin 9
 RED (power)              VIN (Battery Power -- 5V works too, but won't be as strong or fast)
 BLACK (ground)           Ground (GND)
 
 This sketch was written by SparkFun Electronics, with lots of help from the Arduino community.
 This code is completely free for any use.
 */

#include <vexMotor.h> // includes the vexMotor library (must also include Servo.h)
#include <Servo.h>    // servo library -- vexMotor relies on the Servo library

vexMotor myVexMotor1;  // creates an instance of the vexMotor class
// create an instance for each motor that is connected
// to your device.

void setup()
{
  myVexMotor1.attach(3); // setup / attach the vexMotor onto pin 9
  Serial.begin(9600);    // starts the Serial communication on Arduino
  myVexMotor1.write(100);
}

void loop()
{
}






