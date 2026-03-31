unsigned int ADCValue;
#include <Servo.h>
Servo servo;
int servoPin = 9;
int pos = 0;
void setup(){
 Serial.begin(9600);
 servo.attach(servoPin);
 servo.write(0); 
}

void loop(){

int val = analogRead(0); // Define and read the data from the ultrasonic sensor                          
  val = map(val, 0, 300, 0, 255);
   Serial.println(val);
delay(10);


if ( val<100 ) {
 for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 310 degrees
   // in steps of 1 degree
   servo.write(pos);              // tell servo to go to position in variable 'pos'
   delay(2);                       // waits 15ms for the servo to reach the position
 }
}
else {
 delay(1000);
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 310 degrees to 0 degrees
   servo.write(pos);              // tell servo to go to position in variable 'pos'
   delay(2);                       // waits 15ms for the servo to reach the position
 }
}
}