#define BT 17
void setup() {
  Serial.begin(115200);
  pinMode(BT, OUTPUT);

  int count = 1;
  while (count <= 5) {
    digitalWrite(BT, LOW);
    delay(1000);
    digitalWrite(BT, HIGH);
    delay(1000);
    Serial.println(count);
    count++;
  }

  count = 5;
  while (count >= 1) {
    digitalWrite(BT, LOW);
    delay(1000);
    digitalWrite(BT, HIGH);
    delay(1000);
    Serial.println(count);
    count--;
  }
}

void loop() {
}