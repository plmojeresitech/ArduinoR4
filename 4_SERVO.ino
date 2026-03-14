#include<Servo.h> 
Servo name_servo; // define any servo name

void setup() {

name_servo.attach (9); // define servo signal pin
}
void loop() {

name_servo.write (180); // Turned to 180 degree
delay (3000);
name_servo.write (0); // Turned to 0 degree
delay (2000);
name_servo.write (90); // Turned to 90 degree
delay (2000);
}

