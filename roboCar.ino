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

void loop() {
  Bluetoothcontrol();
}

void Bluetoothcontrol() {
  if (Serial.available() > 0) {
    value = Serial.read();
    Serial.println(value);
  }

  if (value == 'F') {
    forward();
  } else if (value == 'B') {
    backward();
  } else if (value == 'L') {
    left();
  } else if (value == 'R') {
    right();
  } else if (value == 'S') {
    Stop();
  }

  switch (value) {
    case '1': Speed = 120; updateMotorSpeed(); Serial.println("Speed Level 1: Slow"); break;
    case '2': Speed = 150; updateMotorSpeed(); Serial.println("Speed Level 2: Slightly Faster"); break;
    case '3': Speed = 180; updateMotorSpeed(); Serial.println("Speed Level 3: Moderately Fast"); break;
    case '4': Speed = 210; updateMotorSpeed(); Serial.println("Speed Level 4: Fast"); break;
    case '5': Speed = 255; updateMotorSpeed(); Serial.println("Speed Level 5: Maximum Speed"); break;
  }
}

void updateMotorSpeed() {
  M1.setSpeed(Speed);
  M2.setSpeed(Speed);
  M3.setSpeed(Speed);
  M4.setSpeed(Speed);
}

void forward() {
  M1.run(FORWARD);
  M2.run(FORWARD);
  M3.run(FORWARD);
  M4.run(FORWARD);
}

void backward() {
  M1.run(BACKWARD);
  M2.run(BACKWARD);
  M3.run(BACKWARD);
  M4.run(BACKWARD);
}

void right() {
  M1.run(BACKWARD);
  M2.run(BACKWARD);
  M3.run(FORWARD);
  M4.run(FORWARD);
}

void left() {
  M1.run(FORWARD);
  M2.run(FORWARD);
  M3.run(BACKWARD);
  M4.run(BACKWARD);
}
void Stop() {
  M1.run(RELEASE);
  M2.run(RELEASE);
  M3.run(RELEASE);
  M4.run(RELEASE);
}