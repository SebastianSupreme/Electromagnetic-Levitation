#include <Arduino.h>

int setPoint = 272;
int sensorPin = A0;
int outputPin = 5;
int sensorValue = 0;
unsigned long time;

void setup() {

Serial.begin(9600);
pinMode(outputPin, OUTPUT);
time = millis();
}

void loop() {

sensorValue = analogRead(sensorPin);

if(millis() - time >= 500){
Serial.println(sensorValue);
time = millis();
}

if(sensorValue >= setPoint){
  digitalWrite(outputPin, HIGH);
}else {
  digitalWrite(outputPin, LOW);
}

}







