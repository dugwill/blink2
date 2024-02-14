#line 1 "C:\\Users\\douglaswi\\ArduinoProjects\\github\\dugwill\\blink2\\${workspaceFolder}\\build\\sketch\\blink2.ino.cpp"
#include <Arduino.h>
#line 1 "C:\\Users\\douglaswi\\ArduinoProjects\\github\\dugwill\\blink2\\blink2.ino"
// Pin 13 is connected to the LED
const int ledPin = 13;

// The setup function runs once when the sketch starts
void setup() {
  // Initialize the digital pin as an output
  pinMode(ledPin, OUTPUT);
}

// The loop function runs repeatedly
void loop() {
  // Turn the LED on
  digitalWrite(ledPin, LOW);
  // Wait for a second
  delay(1000);
  // Turn the LED off
  digitalWrite(ledPin, HIGH);
  // Wait for a second
  delay(1000);
}

