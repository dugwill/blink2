# 1 "C:\\Users\\douglaswi\\ArduinoProjects\\github\\dugwill\\blink2\\blink2.ino"
// Pin 13 is connected to the LED
const int ledPin = 13;

// The setup function runs once when the sketch starts
void setup() {
  // Initialize the digital pin as an output
  pinMode(ledPin, 0x1);
}

// The loop function runs repeatedly
void loop() {
  // Turn the LED on
  digitalWrite(ledPin, 0x0);
  // Wait for a second
  delay(1000);
  // Turn the LED off
  digitalWrite(ledPin, 0x1);
  // Wait for a second
  delay(1000);
}
