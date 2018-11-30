int watervalue;

void setup() {
  Serial.begin(19200);
  pinMode(A1, INPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  watervalue = 0;
  for (int count = 0; count < 1; count++) {
    watervalue = analogRead(A1);
    Serial.println(watervalue);
    if (watervalue > 400) {
      digitalWrite(9, HIGH);
      delay(1000);
    } else {
      digitalWrite(9, LOW);
      delay(1000);
    }
  }

}
