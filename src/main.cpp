#include <Arduino.h>
#define LED_PIN 2
#define BUTTON_PIN 4

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLDOWN);
  Serial.begin(9600);
  digitalWrite(LED_PIN, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool isPressed{digitalRead(BUTTON_PIN)};
  if(isPressed){
      digitalWrite(LED_PIN, HIGH);
      Serial.println("ON");
  }
  else{
    digitalWrite(LED_PIN, LOW);
    Serial.println("OFF");
  }
}