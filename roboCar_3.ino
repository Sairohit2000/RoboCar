void Bluetoothcontrol() {
  // Existing motion control code here (if unchanged by Person 2)

  switch (value) {
    case '1': Speed = 120; updateMotorSpeed(); Serial.println("Speed Level 1: Slow"); break;
    case '2': Speed = 150; updateMotorSpeed(); Serial.println("Speed Level 2: Slightly Faster"); break;
    case '3': Speed = 180; updateMotorSpeed(); Serial.println("Speed Level 3: Moderately Fast"); break;
    case '4': Speed = 210; updateMotorSpeed(); Serial.println("Speed Level 4: Fast"); break;
    case '5': Speed = 255; updateMotorSpeed(); Serial.println("Speed Level 5: Maximum Speed"); break;
  }
}
