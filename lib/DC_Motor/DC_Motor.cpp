#include "Arduino.h"
#include"DC_Motor.h"

  DC_Motor:: DC_Motor(int pin1,int pin2){
     pinMode(pin1,OUTPUT);
     pinMode(pin2,OUTPUT);
      pin_1=pin1;
     pin_2 =pin2;

     }
void DC_Motor:: forward()
{
  digitalWrite(pin_1,HIGH);
  digitalWrite(pin_2,LOW);

}
void DC_Motor:: backward()
{
  digitalWrite(pin_1,LOW);
    digitalWrite(pin_2,HIGH);

}
void DC_Motor:: setSpeed(int speed)
{
  motor_speed= speed;
}
void DC_Motor:: forwardwithSpeed()
{
  analogWrite(pin_1,motor_speed);
  analogWrite(pin_2,0);
}
void  DC_Motor:: backwardwithSpeed()
{
  analogWrite(pin_1,0);
  analogWrite(pin_2,motor_speed);

}
void  DC_Motor:: stop()
{
  digitalWrite(pin_1,LOW);
  digitalWrite(pin_2,LOW);
}
