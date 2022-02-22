#include <IRremote.h>
int emiter =8;
const int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;
void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn();
  irrecv.blink13(true);
  pinMode(emiter,OUTPUT);
}


void loop(){
  digitalWrite(emiter,HIGH);
  if (irrecv.decode(&results)){
        Serial.println(results.value);
         Serial.println(" "); 

  Serial.print("Code: "); 

  Serial.println(results.value); //prints the value a a button press 

  Serial.println(" "); 

        irrecv.resume();
  }
}
