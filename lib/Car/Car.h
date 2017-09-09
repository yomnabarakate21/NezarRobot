
#ifndef CAR_H
#define CAR_H
#include "DcMotor.h"
class Car {
private:
  int speed;
  DcMotor motor1;
  DcMotor motor2;

public:
  Car(int motor1For, int motor1Back, int motor2For, int motor2Back);
  void setCarSpeed(int speed);
  void forward();
  void backward();
  void stop();
  void right();
  void left();
};
#endif
