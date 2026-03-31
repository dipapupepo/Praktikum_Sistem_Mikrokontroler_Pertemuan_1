int timer = 100; // delay, makin besar makin lambat

void setup() {
  // inisialisasi pin 2 sampai 8 sebagai output
  for (int ledPin = 2; ledPin <= 8; ledPin++) {
    pinMode(ledPin, OUTPUT);
  }
}

void loop() {
  // dari kiri ke kanan (2 → 8)
  for (int ledPin = 2; ledPin <= 8; ledPin++) {
    digitalWrite(ledPin, HIGH);
    delay(timer);
    digitalWrite(ledPin, LOW);
  }

  // dari kanan ke kiri (8 → 2)
  for (int ledPin = 8; ledPin >= 2; ledPin--) {
    digitalWrite(ledPin, HIGH);
    delay(timer);
    digitalWrite(ledPin, LOW);
  }
}