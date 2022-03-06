int speedpin=7;
int dir1=6;
int dir2=5;
int mspeed=255;
int rgb=9;
void setup() {
  // put your setup code here, to run once:
pinMode(speedpin,OUTPUT);    
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);
pinMode(rgb,OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(dir1,LOW);
digitalWrite(dir2,HIGH);
Serial.println(mspeed);
analogWrite(speedpin,mspeed);
analogWrite(rgb,255);
}
