#include <Servo.h>
Servo myservo;
char dato;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myservo.attach(6);
pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0){
  dato = Serial.read();
  if(dato == '1'){
    myservo.write(90);
    digitalWrite(7,1);
    delay(100);
  }
  else{
    myservo.write(180);
    digitalWrite(7,0);
  }
}
}
