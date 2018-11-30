void setup() {
  Serial.begin(19200);
  pinMode(8, INPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  for (int count = 0; count < 10; count++) {
    if (HIGH == digitalRead(8)) {
      digitalWrite(9, HIGH);
      Serial.println(true);
    } else {
      digitalWrite(9, LOW);
      Serial.println(false);
    }
  }

}
