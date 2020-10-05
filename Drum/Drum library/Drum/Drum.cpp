

#include<Arduino.h>
#include "Drum.h"

void Drum::begin(){
  threshold = 6;
  Serial.begin(9600);
}

void Drum::sendKey(char key){
  Serial.print(key);
  delay(delayTime);
}


bool Drum::hitDrum(int pin){
  int firstVal = senseTouch(pin);
  //int secondVal = senseTouch(pin);
  //int val = firstVal - secondVal;
  //if(val<0) val = -val;
  
  if(firstVal>=threshold){
   return true;  
  }  

  return false;
}

int Drum::senseTouch(int pin){
  int counter = 0;
  pinMode(pin, OUTPUT);
  digitalWrite(pin, LOW);
  delayMicroseconds(10);
  pinMode(pin, INPUT);

  while(digitalRead(pin)!=HIGH && counter<10000)
    ++counter;

  return counter;
}

void Drum::checkValue(int pin){
  Serial.println(senseTouch(pin));
}

void Drum::setThreshold(int a){
  threshold = a;
}