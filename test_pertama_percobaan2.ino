#define ledRed 12
#define tPin 2
#define ePin 3

void setup() {
  pinMode(ledRed, OUTPUT);
  pinMode(tPin, OUTPUT);
  pinMode(ePin, INPUT);
  Serial.begin(9600);
}

void ledBlink(int speed) {
  digitalWrite(ledRed, HIGH);
  delay(speed);
  digitalWrite(ledRed, LOW);
}

void loop() {

  digitalWrite(tPin, LOW);
  delayMicroseconds(2);
  digitalWrite(tPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(tPin, LOW);

  long durasi,jarak;
  durasi = pulseIn(ePin, HIGH);
  jarak = (durasi * 0.0343) / 2;
  delay(100);

 Serial.println(jarak);

  if(jarak <= 30) {
    ledBlink(200);
  }
  if(jarak <= 10) {
    digitalWrite(ledRed, HIGH);
  }
  else {
     digitalWrite(ledRed, LOW);
  }
}
