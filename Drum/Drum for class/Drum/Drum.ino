#include<Drum.h>
Drum drum;
void setup() {
  // put your setup code here, to run once:
  drum.begin();
  drum.setThreshold(15);
}
void loop() {
  // put your main code here, to run repeatedly:
    if(drum.hitDrum(2)) drum.sendKey('R');
  if(drum.hitDrum(3)) drum.sendKey('J');
  if(drum.hitDrum(4)) drum.sendKey('E');
  if(drum.hitDrum(5)) drum.sendKey('D');
  if(drum.hitDrum(6)) drum.sendKey('K');

   
}
