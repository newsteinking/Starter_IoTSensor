int item;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  item = 0;
  for (item = 0; item <= 255; item++) {
    digitalWrite(13, HIGH);
    analogWrite(11, item);
    item = item + 5;
    delay(1000);
  }

}
