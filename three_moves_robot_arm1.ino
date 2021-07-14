// C++ code
//
#include <Servo.h>
Servo servo_13;
Servo servo_12;
Servo servo_11;
Servo servo_10;
Servo servo_9;
Servo servo_8;
void setup()
{
  servo_13.attach(13, 500, 2500);
  servo_12.attach(12, 500, 2500);
  servo_11.attach(11, 500, 2500);
  servo_10.attach(10, 500, 2500);
  servo_9.attach(9, 500, 2500);
  servo_8.attach(8, 500, 2500);
  pinMode(3, OUTPUT);
}
long microsecondsToInches(long microseconds) {
   return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
   return microseconds / 29 / 2;
}

void loop()
{
  
long duration, inches, cm;

  pinMode(7, OUTPUT);
   digitalWrite(5, 0);
   delayMicroseconds(2);
   digitalWrite(5, 1);
   delayMicroseconds(10);
   digitalWrite(5, 0);
   pinMode(4, INPUT);
   duration = pulseIn(4, 1);
   inches = microsecondsToInches(duration);
   cm = microsecondsToCentimeters(duration);
   Serial.print(inches);
   Serial.print("in, ");
   Serial.print(cm);
   Serial.print("cm");
   Serial.println();
   delay(100);
  
  
  if(inches > 21 && inches < 41)
  {
    delay(3000);
  servo_13.write(45);
  servo_12.write(45);
  servo_11.write(45);
  servo_10.write(45);
  servo_9.write(45);
  servo_8.write(45);
  digitalWrite(3, HIGH);
  }
  else
  {
 
  servo_13.write(0);
  servo_12.write(0);
  servo_11.write(0);
  servo_10.write(0);
  servo_9.write(0);
  servo_8.write(0);
  digitalWrite(3, 0);
}
}