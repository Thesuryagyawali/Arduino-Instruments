int DO = 2; //Pin for Digital Output - DO
int AO = A0; // Pin for Analog Output - AO
int threshold = 30; //Set minimum threshold for LED lit
int sensorvalue = 0;
void setup() {
Serial.begin(9600);
pinMode(7, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
}
void loop() {
sensorvalue = analogRead(A0); //Read the analog value
Serial.print("Analog: ");
Serial.print(sensorvalue); //Print the analog value
Serial.print(" ");
Serial.print("Digital: ");
Serial.println(digitalRead(DO)); //Print the digital value
if (sensorvalue >= threshold) { //Compare analog value with threshold
digitalWrite(7, HIGH);
digitalWrite(9, HIGH);
digitalWrite(10, HIGH);
}
else {
digitalWrite(7, LOW);
digitalWrite(9, LOW);
digitalWrite(10, LOW);

}
}
