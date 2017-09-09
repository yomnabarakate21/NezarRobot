#include "DC_Motor.h"
#include "Arduino.h"

DC_Motor::DC_Motor(int forwardPin, int backwardPin) {
  pinMode(forwardPin, OUTPUT);
  pinMode(backwardPin, OUTPUT);
  this->forwardPin = forwardPin;
  this->backwardPin = backwardPin;
}
void DC_Motor::forward() {
  digitalWrite(forwardPin, HIGH);
  digitalWrite(backwardPin, LOW);
}
void DC_Motor::backward() {
  digitalWrite(forwardPin, LOW);
  digitalWrite(backwardPin, HIGH);
}
void DC_Motor::setSpeed(int speed) { motor_speed = speed; }
void DC_Motor::forwardwithSpeed() {
  analogWrite(forwardPin, motor_speed);
  analogWrite(backwardPin, LOW);
}
void DC_Motor::backwardwithSpeed() {
  analogWrite(forwardPin, LOW);
  analogWrite(backwardPin, motor_speed);
}
void DC_Motor::stop() {
  digitalWrite(forwardPin, LOW);
  digitalWrite(backwardPin, LOW);
}
