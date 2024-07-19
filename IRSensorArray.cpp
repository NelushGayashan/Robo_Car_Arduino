#include "IRSensorArray.h"
#include <Arduino.h>

IRSensorArray::IRSensorArray(const int pins[]) {
  for (int i = 0; i < 6; i++) {
    irSensorPins[i] = pins[i];
  }
}

void IRSensorArray::begin() {
  for (int i = 0; i < 6; i++) {
    pinMode(irSensorPins[i], INPUT);
  }
}

int IRSensorArray::read() {
  int data = 0;
  for (int i = 0; i < 6; i++) {
    data <<= 1;
    data |= digitalRead(irSensorPins[i]);
  }
  return data;
}
