
#ifndef DC_Motor_H
#define DC_Motor_H
class DC_Motor {
private:
  int forwardPin;
  int backwardPin;
  int motor_speed;

public:
  DC_Motor(int pin1, int pin2);
  void forward();
  void backward();
  void stop();
  void forwardwithSpeed();
  void backwardwithSpeed();
  void setSpeed(int speed);
};
#endif
