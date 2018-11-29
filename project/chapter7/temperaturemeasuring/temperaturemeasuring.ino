int item;
float temp2;
int temp3;
int temp4;

void setup() {
  Serial.begin(19200);
  pinMode(A1, INPUT);
}

void loop() {
  for (int count = 0; count < 1; count++) {
    item = 0;
    item = analogRead(A1);
    temp2 = log(10240000 / item - 10000) ;
    temp3 = 1 / (0.001129148 + (0.000234125 + (8.76741e-8 * temp2) * temp2) * temp2);
    temp4 = temp3 - 273.15;
    delay(1000);
    Serial.println(temp4);
  }

}
