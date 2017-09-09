#include "Car.h"

  Car:: Car (int motor1For, int motor1Back,int motor2For, int motor2Back)
  {
   DC_Motor motorc1=  DC_Motor (motor1For,motor1Back) ;
   DC_Motor motorc2=  DC_Motor(motor2For,motor2Back) ;
   motor1 = motorc1;
   motor2 = motorc2;
  }

  void Car:: setCarSpeed(int speed)
  {
    motor1.setSpeed(speed);
    motor2.setSpeed(speed);
  }
  void Car:: forward()
  {
    motor1.forward();
    motor2.forward();
  }
  void Car:: backward()
  {
    motor1.backward();
    motor2.backward();
  }
  void Car:: right()
  {
    motor1.backward();
    motor2.forward();
  }
  void Car:: left()
  {
    motor1.forward();
    motor2.backward();
  }
  void Car:: stop()
  {
    motor1.stop();
    motor2.stop();
  }
