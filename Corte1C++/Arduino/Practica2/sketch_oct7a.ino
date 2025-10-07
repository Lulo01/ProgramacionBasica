const int ledPin = 13; // Define the pin the LED is connected to

void setup() {
  pinMode(ledPin, OUTPUT); // Set the LED pin as an output
}

void loop() {
  // Blink the LED 5 times
  for (int i = 0; i < 5; i++) { 
    digitalWrite(ledPin, HIGH); // Turn the LED on
    delay(500);                 // Wait for 500 milliseconds
    digitalWrite(ledPin, LOW);  // Turn the LED off
    delay(500);                 // Wait for 500 milliseconds
  }

  delay(2000); // Pause for 2 seconds before repeating the blink sequence
}
