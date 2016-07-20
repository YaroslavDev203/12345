

int a;
int tr;
#include <Servo.h>
Servo servo1;
void setup() {
  pinMode(A0,INPUT);

pinMode(8, OUTPUT);
  tr=0;
servo1.attach(7);  
}

void loop() {
  
a=analogRead(A0);
servo1.write(a/5);  
if (tr=0){
  if (a=0){
    digitalWrite(8,1);
    delay(500);
    digitalWrite(8,0);
    delay(500);
       digitalWrite(8,1);
    delay(500);
    digitalWrite(8,0);
    tr=1;
  }
}
if (tr=1){
  if (a>0){
    tr=0;
  }
}
if (a>1022){
  digitalWrite(8,1);
  delay(100);
  digitalWrite(8,0);
}



  
  
  
  

  
}
