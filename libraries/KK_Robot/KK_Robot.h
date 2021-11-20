
#ifndef KK_Robot_h
#define KK_Robot_h

#include "Arduino.h"
#include "./KK_Nav.h"
#include "./KK_Movement.h"
#include "./conductivitynew.h"
#include <LiquidCrystal_I2C.h>

#include <Servo.h>

class Robot : public OmniMove, public Navigation {
  public: 
    Robot(int servoPin, int trigPin, int echoPin, int irPin, int salinityServoPin): Navigation( servoPin, trigPin, echoPin, irPin) {
      pinMode(salinityServoPin, OUTPUT);
      salinityMotor.attach(salinityServoPin);
      lcd = new LiquidCrystal_I2C(
          0x3F, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
      lcd->begin(16, 2);
      lcd->home();
      lcd->print("Krusty Kannons");
    };

    void print(String text) {
      lcd->begin(16, 2);
      lcd->home();
      lcd->print(text);
    }

    void pullUpSalinity() {
      // salinityMotor.write(80);
      // delay(1000);
      // salinityMotor.write(90);
      salinityMotor.write(0);
    }

    void dropSalinity() {
     // salinityMotor.write(180);
     // delay(2000);
      salinityMotor.write(1700);
    }

    double getSalinity() {
      double slope = 12.884;
      double intercept = 172.341;
      int adc;
      adc = getConductivity();
      double salinity;
      salinity = slope / (adc - intercept);

      return salinity;

    }

    double getIncline() {
       int sensorValue = analogRead(A1);
       return double(sensorValue);
       double angle = sensorValue / 52 + 0.5;
       
       return 10.1;
    } 

  private:
    Servo salinityMotor;
    LiquidCrystal_I2C *lcd;
};

#endif
