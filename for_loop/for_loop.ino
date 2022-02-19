int led=13;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int x=1;x<3;x++) {
  digitalWrite(led,HIGH);
  delay(350);
  digitalWrite(led,LOW);
  delay(100);
}

for(int x=1;x<3;x++) {
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  delay(100);
}

for(int x=1;x<3;x++){
  digitalWrite(led,HIGH);
  delay(350);
  digitalWrite(led,LOW);
  delay(100);
}
delay(5000);
}
