
#ifndef DC_Motor_H
#define  DC_Motor_H
class DC_Motor{
private:
  int pin_1;
  int pin_2;
  int motor_speed;
public:
DC_Motor(int pin1, int pin2);
void Forward();
void Backward();
void Stop();
void ForwardwithSpeed();
void BackwardwithSpeed();
void setSpeed(int speed);
};
#endif
