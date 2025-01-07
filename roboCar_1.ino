#include <AFMotor.h>

char value;
int Speed = 120; 
AF_DCMotor M1(1);
AF_DCMotor M2(2);
AF_DCMotor M3(3);
AF_DCMotor M4(4);

void setup() {
  Serial.begin(9600);
  updateMotorSpeed();
}
