#include <Arduino.h>

int condition[3]; //Variabel untuk menyimpan kondisi

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT); //Lampu 1
  pinMode(12,OUTPUT); //Lampu 2
  pinMode(11,OUTPUT); //Lampu 3
  for(int i=10; i>6;i--) //Buttons
  {
    pinMode(i,INPUT_PULLUP);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  //======Simpan pembacaan kondisi di variabel
  condition[0]=digitalRead(7); //Button 1
  condition[1]=digitalRead(8); //Button 2
  condition[2]=digitalRead(9); //Button 3

  for(int i=13; i>10;i--) //Matikan semua LED
  {
    digitalWrite(i,LOW);
  }

  while(!condition[0]) //Button 1 ditekan
  {
    digitalWrite(13,HIGH);
    if(!digitalRead(10))break; //Button Juri ditekan
  }
  while(!condition[1])
  {
    digitalWrite(12,HIGH);
    if(!digitalRead(10))break;
  }
  while(!condition[2])
  {
    digitalWrite(11,HIGH);
    if(!digitalRead(10))break;
  }

}



//================LED Kedip Gantian===================
/*
digitalWrite(13, HIGH); //Led di pin 13 hidup
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(13, LOW);//Led di pin 13 mati
  digitalWrite(12, HIGH);
  delay(500);
  */

//=============Kondisional===============
 /*
  if(digitalRead(11)==LOW)
  {
    digitalWrite(13,HIGH);
  }
  else
  {
    digitalWrite(13,LOW);
  }
 */