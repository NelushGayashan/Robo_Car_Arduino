#include "Gripper.h"
#include <Arduino.h>

Gripper::Gripper(int pin) : gripperPin(pin) {}

void Gripper::begin() {
  pinMode(gripperPin, OUTPUT);
}

void Gripper::move() {
  analogWrite(gripperPin, 255);
  delay(500);
  analogWrite(gripperPin, 0);
}
