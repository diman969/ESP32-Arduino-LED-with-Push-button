#include <Arduino.h>
#define ledPin 2
#define buttonPin 4

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLDOWN);
  Serial.begin(9600);
  digitalWrite(ledPin, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool isPressed{digitalRead(buttonPin)};
  if(isPressed){
      digitalWrite(ledPin, HIGH);
      Serial.println("ON");
  }
  else{
    digitalWrite(ledPin, LOW);
    Serial.println("OFF");
  }
}