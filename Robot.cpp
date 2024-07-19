#include "Robot.h"

Robot::Robot()
  : display(), irSensors(IR_SENSOR_PINS), motors(MOTOR_PINS), gripper(GRIPPER_PIN), ultrasonic(TRIGGER_PIN, ECHO_PIN) {}

void Robot::setup() {
  display.begin();
  irSensors.begin();
  motors.begin();
  gripper.begin();
  ultrasonic.begin();
}

void Robot::loop() {
  ultrasonic.measure();
  int distance = ultrasonic.getDistance();
  int lineFollowing = irSensors.read();

  if (digitalRead(SWITCH_PIN) == HIGH) {
    display.update(lineFollowing, distance);

    if (lineFollowing == 0b001100 || lineFollowing == 0b110000) {
      motors.stop();
      delay(1000);
      if (distance > 0 && distance < 10) {
        gripper.move();
        delay(1000);
        motors.rotateClockwise();
        delay(1000);
      } else {
        motors.moveForward();
        delay(1000);
      }
    } else if (lineFollowing == 0b011000) {
      motors.stop();
      delay(1000);
      motors.turnRight();
      delay(1000);
    } else {
      motors.moveForward();
    }
  }
}
