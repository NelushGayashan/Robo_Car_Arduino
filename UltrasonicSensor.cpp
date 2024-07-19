#include "UltrasonicSensor.h"
#include <Arduino.h>

UltrasonicSensor::UltrasonicSensor(int triggerPin, int echoPin)
  : triggerPin(triggerPin), echoPin(echoPin), distance(0) {}

void UltrasonicSensor::begin() {
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void UltrasonicSensor::measure() {
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  distance = pulseIn(echoPin, HIGH) * 0.034 / 2;
}

int UltrasonicSensor::getDistance() const {
  return distance;
}
