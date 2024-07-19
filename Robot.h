#ifndef ROBOT_H
#define ROBOT_H

#include "OLEDDisplay.h"
#include "IRSensorArray.h"
#include "MotorController.h"
#include "Gripper.h"
#include "UltrasonicSensor.h"

// Define pin constants
const int IR_SENSOR_PINS[6] = {2, 3, 4, 5, 6, 7};
const int MOTOR_PINS[4] = {8, 9, 10, 11};
const int TRIGGER_PIN = 12;
const int ECHO_PIN = 13;
const int GRIPPER_PIN = A0;
const int SWITCH_PIN = A1;

class Robot {
public:
  Robot();
  void setup();
  void loop();

private:
  OLEDDisplay display;
  IRSensorArray irSensors;
  MotorController motors;
  Gripper gripper;
  UltrasonicSensor ultrasonic;
};

#endif
