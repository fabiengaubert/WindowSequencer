#include <Arduino.h>
#define onboard 13

void setup() {
  // put your setup code here, to run once:
  pinMode(onboard, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(onboard, LOW);
  delay(500);
  digitalWrite(onboard, HIGH);
  delay(500);
  Serial.println("Test!!");
}