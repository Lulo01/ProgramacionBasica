const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int blinkCounter = 0;


  do {
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);
    blinkCounter++;
  }while (blinkCounter < 5);

  delay(2000);
}