#ifndef ULTRASONICSENSOR_H
#define ULTRASONICSENSOR_H

class UltrasonicSensor {
public:
  UltrasonicSensor(int triggerPin, int echoPin);
  void begin();
  void measure();
  int getDistance() const;

private:
  int triggerPin;
  int echoPin;
  int distance;
};

#endif
