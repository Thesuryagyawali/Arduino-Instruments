#define threshold 5
#define delayTime 200

void setup() {
 // put your setup code here, to run once:
 Serial.begin(9600);
}

void loop() {
 // put your main code here, to run repeatedly:
 if(hitDrum(2)){
   sendKey('F');
 }

 if(hitDrum(3)){
   sendKey('U');
 }

}


void sendKey(char key){
 Serial.print(key);
 delay(delayTime);
}

bool hitDrum(int pin){
 if(senseTouch(pin)>=threshold)
   return true;
 return false;
}

int senseTouch(int pin){
 int counter = 0;
 pinMode(pin, OUTPUT);
 digitalWrite(pin, LOW);
 delayMicroseconds(10);
 pinMode(pin, INPUT);

 while(digitalRead(pin)!=HIGH && counter<20000)
   ++counter;

 return counter;
}
