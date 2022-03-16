const int switchPin = 2;   //Set switchPin to Pin 2 on Arduino

const int ledPin = 13;   //Set LedPin Pin to Pin 13 on Arduino

 

/* The setup() function is called when a sketch starts. It is used to initialize variables, pin modes, start using libraries, etc. This function will only run once, after each power up or reset of the Arduino board. */

 

void setup()

{

pinMode(switchPin, INPUT); // INPUT means the "switchPin" which is actually pin no 2 is directed to take input instruction form the arduino

pinMode(ledPin, OUTPUT); // OUTPUT means the "ledPin" which is actually pin no 13 is directed to give output instruction form the arduino

digitalWrite(switchPin, HIGH); // digitalWrite is used to write a HIGH or a LOW value to a digital pin (HIGH is the voltage level).

}

 

/* The loop() function executes the program repeatedly until Specified. */

 

void loop()

{

if(digitalRead(switchPin) == LOW){

digitalWrite(ledPin, LOW); // digitalWrite is used to write a HIGH or a LOW value to a digital pin (LOW is the voltage level).

}

else{

digitalWrite(ledPin, HIGH); // digitalWrite is used to write a HIGH or a LOW value to a digital pin (HIGH is the voltage level).

}

}
