int green = 2;
int button = 8;
int buttonstate = 0;
void setup() {
  // put your setup code here, to run once:
    pinMode(green,OUTPUT);      
    pinMode(button,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonstate = digitalRead(button);

if(buttonstate == HIGH) {
    digitalWrite(green,HIGH);
    }
  else {
   digitalWrite(green,LOW);
 }
  
  }
