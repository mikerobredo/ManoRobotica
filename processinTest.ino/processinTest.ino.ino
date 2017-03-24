#include <Servo.h>
Servo myservo;

int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin
int val2;
int del = 1;// retardo entre  pasos

   void setup(){
      Serial.begin(9600);
      myservo.attach(9); 
   }

   void loop(){
      val = analogRead(potpin);           
      val2 = map(val, 0, 1023, 0, 180);  
      myservo.write(val2); 
      //valor = random(0, 255);      
      val=map(val, 0, 1023, 0, 255); 
      Serial.write(val);
      delay(del);
   }
