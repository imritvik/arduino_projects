int mtr = 3;

void setup() {
  Serial.begin(9600);
  pinMode(mtr, OUTPUT);
}

void loop() {
  int valu = analogRead(A0);
  Serial.println(valu);
  int newval = map(valu , 0 , 1023 , 0 , 255);
  Serial.println(newval);
  analogWrite(mtr, newval);
}
