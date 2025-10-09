int buzzerPin = 8;

void setup() {}

void loop() {
  tone(buzzerPin, 262); // DO
  delay(500);
  tone(buzzerPin, 500); // RE
  delay(500);
  tone(buzzerPin, 1000); // MI
  delay(500);
  noTone(buzzerPin);
  delay(1000);
}
