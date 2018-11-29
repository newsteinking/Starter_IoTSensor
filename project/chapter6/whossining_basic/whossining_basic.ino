int item;
int nosound;

void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  item = 262;
  nosound = 0;
  for (int count = 0; count < 10; count++) {
    analogWrite(9, item);
    delay(1000);
    analogWrite(9, nosound);
    delay(1000);
  }

}
