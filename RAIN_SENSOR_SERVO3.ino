#include <Servo.h>

Servo tap_servo;

int sensor_pin = 4; // Analog input from the rain sensor
int tap_servo_pin = 5; // Digital output to control the servo
int val; // Variable to store the sensor reading

void setup() {
  pinMode(sensor_pin, INPUT); // Initialize the sensor pin as an input
  tap_servo.attach(tap_servo_pin); // Attach the servo motor to its control pin
}

void loop() {
  val = digitalRead(sensor_pin); // Read the value from the rain sensor

  if (val == 0) {
    tap_servo.write(0); // If the sensor is dry, set servo to 0 degrees
  }
  if (val == 1) {
    tap_servo.write(180); // If the sensor is wet, set servo to 180 degrees
  }
}