#include "DcMotor.h"
#include "Arduino.h"

DcMotor::DcMotor(int forwardPin, int backwardPin) {
  pinMode(forwardPin, OUTPUT);
  pinMode(backwardPin, OUTPUT);
  this->forwardPin = forwardPin;
  this->backwardPin = backwardPin;
}
void DcMotor::forward() {
  digitalWrite(forwardPin, HIGH);
  digitalWrite(backwardPin, LOW);
}
void DcMotor::backward() {
  digitalWrite(forwardPin, LOW);
  digitalWrite(backwardPin, HIGH);
}
void DcMotor::setSpeed(int speed) { motor_speed = speed; }
void DcMotor::forwardwithSpeed() {
  analogWrite(forwardPin, motor_speed);
  analogWrite(backwardPin, LOW);
}
void DcMotor::backwardwithSpeed() {
  analogWrite(forwardPin, LOW);
  analogWrite(backwardPin, motor_speed);
}
void DcMotor::stop() {
  digitalWrite(forwardPin, LOW);
  digitalWrite(backwardPin, LOW);
}
