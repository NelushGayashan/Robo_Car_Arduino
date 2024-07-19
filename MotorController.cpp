#include "MotorController.h"
#include <Arduino.h>

MotorController::MotorController(const int pins[]) {
  for (int i = 0; i < 4; i++) {
    motorPins[i] = pins[i];
  }
}

void MotorController::begin() {
  for (int i = 0; i < 4; i++) {
    pinMode(motorPins[i], OUTPUT);
  }
}

void MotorController::moveForward() {
  digitalWrite(motorPins[0], HIGH);
  digitalWrite(motorPins[1], LOW);
  digitalWrite(motorPins[2], HIGH);
  digitalWrite(motorPins[3], LOW);
}

void MotorController::stop() {
  for (int i = 0; i < 4; i++) {
    digitalWrite(motorPins[i], LOW);
  }
}

void MotorController::turnRight() {
  digitalWrite(motorPins[0], HIGH);
  digitalWrite(motorPins[1], LOW);
  digitalWrite(motorPins[2], LOW);
  digitalWrite(motorPins[3], LOW);
}

void MotorController::rotateClockwise() {
  digitalWrite(motorPins[0], HIGH);
  digitalWrite(motorPins[1], LOW);
  digitalWrite(motorPins[2], HIGH);
  digitalWrite(motorPins[3], LOW);
}
