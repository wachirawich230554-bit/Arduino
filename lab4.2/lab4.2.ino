#define BT 17
void setup() {
  pinMode(BT, OUTPUT);
  Serial.begin(115200);
  int count = 1;
  do {
    digitalWrite(BT, LOW);
    delay(1000);
    digitalWrite(BT, HIGH);
    delay(1000);
    Serial.println(count);
    count++;
  } while (count <= 5);
}

void loop() {
}