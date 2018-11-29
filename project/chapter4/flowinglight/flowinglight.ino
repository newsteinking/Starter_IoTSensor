int i;
int j;

void setup() {
  pinMode(0, OUTPUT);
}

void loop() {
  for (i = 1; i <= 3; i++) {
    digitalWrite(0, HIGH);
    delayMicroseconds(100);
    digitalWrite(0, HIGH);
    delayMicroseconds(100);
    digitalWrite(0, HIGH);
    delayMicroseconds(100);
  }
  for (j = 1; j <= 3; j++) {
    digitalWrite(0, HIGH);
    delayMicroseconds(100);
    digitalWrite(0, HIGH);
    delayMicroseconds(100);
    digitalWrite(0, HIGH);
    delayMicroseconds(100);
  }

}
