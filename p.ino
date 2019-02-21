#include "servo.h"
servo servoisquierdo;
servo servoderecho;
void setup() {
  Serial.begin (9600);
  servoderecho.attach(11);
  servoisquierdo.attach(10);
}
char orden;
void loop() {
  if (Serial.available()>0)
   {
    orden=Serial.read();
    Serial.println (orden);
  }
  if (orden=="w") {
  servoderecho.write(0);
  delay(1000);
  servoderecho.write(90);
  delay(1000);
  servoderecho.write(180);
  delay(1000);
  servoderecho.write(90);
  delay(1000);
  servoisquierdo.write(0);
  delay(1000);
  servoisquierdo.write(90);
  delay(1000);
  servoisquierdo.write(180);
  delay(1000);
  servoisquierdo.write(90);
  delay(1000);
  }
  else {
    servoderecho.write(90);
    servoisquierdo.write(90);
  }
}
