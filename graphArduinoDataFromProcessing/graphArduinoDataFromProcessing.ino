void setup() {
  Serial.begin(9600);
}

void loop() {
  // Send the value of analog input 0
  Serial.println(analogRead(A0));
  // wait a bit for the analog-to-digital converter 
  // to stabilize after the last reading:
  delay(2);
}
