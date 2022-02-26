byte ledpin[]={4,5,6,7,8,9,10,11};
int ledelay = 65;
int currentled = 0;
int direction = 1;
unsigned long changetime;

void setup() {
    // put your setup code here, to run once:
   for(int x=0;x<8;x++) {
    pinMode(ledpin[x], OUTPUT);
   }
  changetime = millis();
   }


void loop() {
  // put your main code here, to run repeatedly:
  if ((millis()- changetime) > ledelay) {
      changeled();
      changetime = millis();
  }
  
}

void changeled() {
  for(int x=0;x<8;x++) {
    digitalWrite(ledpin[x],LOW);
  }
  digitalWrite(ledpin[currentled],HIGH);
  currentled += direction;
  if (currentled == 7) {direction = -1;}
  if (currentled == 0) {direction = 1;}
  }
  
