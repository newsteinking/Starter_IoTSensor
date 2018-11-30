int rotationval;
int modval;

void setup() {
  Serial.begin(19200);
  pinMode(A1, INPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  rotationval = 0;
  for (int count = 0; count < 10; count++) {
    rotationval = analogRead(A1);
    Serial.println(rotationval);
    modval = rotationval / 4;
    analogWrite(9, modval);
    Serial.println(modval);
    delay(1000);
  }

}
