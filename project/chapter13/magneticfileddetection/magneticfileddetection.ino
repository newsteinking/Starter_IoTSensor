int magneticval;

void setup() {
  Serial.begin(19200);
  pinMode(8, INPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  magneticval = 0;
  for (int count = 0; count < 10; count++) {
    if (false == digitalRead(8)) {
      digitalWrite(9, HIGH);
      Serial.println(true);
    } else {
      digitalWrite(9, LOW);
      Serial.println(false);
    }
    delay(1000);
  }

}
