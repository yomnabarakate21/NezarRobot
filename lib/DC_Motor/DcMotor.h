
#ifndef DcMotor_H
#define DcMotor_H
class DcMotor {
private:
  int forwardPin;
  int backwardPin;
  int motor_speed;

public:
  DcMotor();
  DcMotor(int pin1, int pin2);
  void forward();
  void backward();
  void stop();
  void forwardwithSpeed();
  void backwardwithSpeed();
  void setSpeed(int speed);
};
#endif
