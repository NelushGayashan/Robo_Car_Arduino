#ifndef GRIPPER_H
#define GRIPPER_H

class Gripper {
public:
  Gripper(int pin);
  void begin();
  void move();

private:
  int gripperPin;
};

#endif
