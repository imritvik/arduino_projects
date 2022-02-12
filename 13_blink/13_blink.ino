/* int ledPin = 13; //declaration of variables
String mystr = "hello, world"
char mychar[] = "hello, world"
float pi = 3.14
long = 777.31212412 */
int led = 13;
int dot = 350;
int dash = 1000;

void setup() {
  // put your setup code here, to run once:
    pinMode(led, OUTPUT);      
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(led,HIGH);
delay(dot);
digitalWrite(13,LOW);
delay(dot);

digitalWrite(13,HIGH);
delay(dot);
digitalWrite(13,LOW);
delay(dot);

digitalWrite(13,HIGH);
delay(dot);
digitalWrite(13,LOW);
delay(dot);

digitalWrite(13,HIGH);
delay(dash);
digitalWrite(13,LOW);
delay(dash);

digitalWrite(13,HIGH);
delay(dash);
digitalWrite(13,LOW);
delay(dash);

digitalWrite(13,HIGH);
delay(dash);
digitalWrite(13,LOW);
delay(dash);

digitalWrite(13,HIGH);
delay(dot);
digitalWrite(13,LOW);
delay(dot);

digitalWrite(13,HIGH);
delay(dot);
digitalWrite(13,LOW);
delay(dot);

digitalWrite(13,HIGH);
delay(dot);
digitalWrite(13,LOW);
delay(dot);
}
