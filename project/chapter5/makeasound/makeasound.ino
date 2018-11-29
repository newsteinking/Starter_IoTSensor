void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  for (int count = 0; count < 10; count++) {
    digitalWrite(9, HIGH);
    delay(1000);
    digitalWrite(9, LOW);
    delay(1000);
  }

}
