int val;

void setup() {
  Serial.begin(19200);
  pinMode(A1, INPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  for (int count = 0; count < 1; count++) {
    val = analogRead(A1);
    Serial.println(val);
    if (val > 195) {
      digitalWrite(9, HIGH);
    } else {
      digitalWrite(9, LOW);
    }
  }

}
