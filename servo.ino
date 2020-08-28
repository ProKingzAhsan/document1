
#include <Servo.h>

Servo myservo;
int pos = 0;

void setup() {
  myservo.attach(16);
  pinMode (5, OUTPUT);
}

void loop(){
  for(pos = 0; pos < 180; pos += 1){
    myservo.write(pos);
    delay(10);
  }
  for (pos = 180; pos>=1; pos -= 1){
    myservo.write(pos);
    delay(10);                                                                                                                                                                                                                                       
  }

  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(5, LOW);
  delay(1000);
}
