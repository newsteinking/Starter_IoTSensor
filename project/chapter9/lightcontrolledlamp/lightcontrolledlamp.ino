int lightval;

void setup() {
  Serial.begin(19200);
  pinMode(A1, INPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  for (int count = 0; count < 1; count++) {
    lightval = analogRead(A1);
    Serial.println(lightval);
    analogWrite(9, (lightval / 10));
    delay(1000);
  }

}
