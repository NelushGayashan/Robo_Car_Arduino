#ifndef MOTORCONTROLLER_H
#define MOTORCONTROLLER_H

class MotorController {
public:
  MotorController(const int pins[]);
  void begin();
  void moveForward();
  void stop();
  void turnRight();
  void rotateClockwise();

private:
  int motorPins[4];
};

#endif
