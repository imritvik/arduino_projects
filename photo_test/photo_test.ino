int photo=A0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
 pinMode(photo,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int x = analogRead(photo);
Serial.println(x);
delay(1000);
}
