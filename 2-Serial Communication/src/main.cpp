#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //Baud rate
  pinMode(7,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int kondisiButton=digitalRead(7);
  if(!kondisiButton)
  {
    Serial.println("tertekan");
    delay(500);
  }
  else 
  {
    Serial.println("terlepas");
    delay(500);
  }

}