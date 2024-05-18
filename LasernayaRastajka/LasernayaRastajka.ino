int tonePin = 7;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  digitalWrite(3, HIGH);
   // считываем данные с датчика и выводим на монитор порта
  if (digitalRead(2) == HIGH) {
    tone(tonePin, 1000);
  }
  if (digitalRead(2) == LOW) {
    noTone(tonePin);
  }
}
