int led = 9;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
int val = analogRead(A0);
Serial.println(val);
int newval = map(val,0,1023,0,255);
Serial.println(newval);
analogWrite(led,newval);
}
