#include <Servo.h>
#include <EncButton.h>
EncButton enc(2, 3, 4);
Servo myservo;
int tonePin = 6;
void setup() {
  myservo.attach(5);
}

int val = 0;

void loop() {
  enc.tick();
  if (enc.right()) {
    if (val <= 180){
      val += 5;
      myservo.write(val);
    }
    else{
      tone(6, 1000);
      delay(50);
    }
  }
  if (enc.left()) {
    if (val >= 0){
      val -= 5;
      myservo.write(val);
    }
    else{
      tone(6, 1000);
      delay(50);
    }
  }
  if (enc.rightH()) {
    if (val <= 180){
      val += 10;
      myservo.write(val);
    }
    else{
      tone(6, 1000);
      delay(50);
    }
  }
  if (enc.leftH()) {
    if (val >= 0){
      val -= 10;
      myservo.write(val);
      
    }
    else{
      tone(6, 1000);
      delay(50);
    }

  }
  noTone(6);
}
