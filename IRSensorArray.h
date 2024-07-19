#ifndef IRSENSORARRAY_H
#define IRSENSORARRAY_H

class IRSensorArray {
public:
  IRSensorArray(const int pins[]);
  void begin();
  int read();

private:
  int irSensorPins[6];
};

#endif
