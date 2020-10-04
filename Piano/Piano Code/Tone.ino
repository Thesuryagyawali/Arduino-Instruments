#define NOTE_C 262 //Defining all the tones that we will use to play any notes
#define NOTE_D 294 //294 is frequency of NOTE_D


#define ACTIVATED LOW 

const int PIEZO = 11; //Connect speaker in PIN number 11
const int LED = 13; //Connect LED in PIN number 13

const int BUTTON_C = 10; //Here pin number 10 will play Note C
const int BUTTON_D = 9;




void setup()
{
  pinMode(LED, OUTPUT); //Defining LED is Output
  pinMode(BUTTON_C, INPUT); //Defining C is input
  digitalWrite(BUTTON_C,HIGH); //When C is pressed C becomes high and play the sound
  pinMode(BUTTON_D, INPUT);
  digitalWrite(BUTTON_D,HIGH);
   
  digitalWrite(LED,LOW); //if nothing plays LED will not glow
}

void loop()
{
  while(digitalRead(BUTTON_C) == ACTIVATED) 
  {
    tone(PIEZO,NOTE_C);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(BUTTON_D) == ACTIVATED)
  {
    tone(PIEZO,NOTE_D);
    digitalWrite(LED,HIGH);
  }

  noTone(PIEZO);
  digitalWrite(LED,LOW);

}

