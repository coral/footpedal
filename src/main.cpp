#include <Arduino.h>
#include "HID-Project.h"

const int pedalPin = 6;
int pedalState = 0;
int mouseButton = 7;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(pedalPin, INPUT);
  Mouse.begin();
}

void loop() {
  pedalState = digitalRead(pedalPin);
   if (pedalState == LOW) {
    digitalWrite(LED_BUILTIN, HIGH);
    Mouse.press(1 << mouseButton);
  } else {
    digitalWrite(LED_BUILTIN, LOW);
    Mouse.release(1 << mouseButton);
  }
}