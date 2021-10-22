
char msg[] = {"0123456789"};
char data[2];

void setup() {
  Serial.begin(9600);
}

void loop() {
  data[0] = '1';
  data[1] = msg[random(0,10)];
  Serial.write(data, 2);
  delay(1000);
}
