int soilval;

void setup() {
  Serial.begin(19200);
  pinMode(A1, INPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  soilval = 0;
  for (int count = 0; count < 10; count++) {
    soilval = analogRead(A1);
    Serial.println(soilval);
    if (item >= 300 && item <= 500) {
      digitalWrite(9, LOW);
    } else {
      digitalWrite(9, HIGH);
    }
  }

}
