#include <Arduino.h>

const int rotationPin = A0;
const int ledPin = 13;
int input = 0;
int output = 0;
void setup(){
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(rotationPin, INPUT);
  Serial.begin(9600);
}

void loop(){
  input = analogRead(rotationPin);
  Serial.println(input);
  output = map(input,0,1023,0,255);
  Serial.println(output);

  analogWrite(ledPin,output);
  delay(10);

}