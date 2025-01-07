void loop() {
  Bluetoothcontrol(); // Main loop handling Bluetooth inputs
}

void Bluetoothcontrol() {
  if (Serial.available() > 0) {
    value = Serial.read(); // Read the incoming value
    Serial.println(value); // Echo the value for debugging
  }

  if (value == 'F') {
    forward(); // Move forward
  } else if (value == 'B') {
    backward(); // Move backward
  } else if (value == 'L') {
    left(); // Turn left
  } else if (value == 'R') {
    right(); // Turn right
  } else if (value == 'S') {
    Stop(); // Stop movement
  }
}
