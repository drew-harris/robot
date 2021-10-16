# Instructions for using the KK_Movement Library

# Installing the library
1. Place the KK_Movement folder in your `Arduino\libraries folder`
2. Include the library in your sketch with `#include "KK_Movement.h"`

## Constructor
```
OmniMove movement;
```
Constructor uses pins 3, 5, 6, 9 correspoding to: front left, front right, back right, back left motors 

Please refer to the arduino pinout in the main README.md on the repo

## Methods
#### Go
```
movement.go(int angle, int speed);
```
Angle from -360 to 360 degrees.

0 is forward, 90 is right, etc.

The angle can be any int and it will be adjusted for the 8 possible directions

The speed is from 0 to 100
0 means no motion

#### Stop
```
movement.stop();
```
Stops the robot

