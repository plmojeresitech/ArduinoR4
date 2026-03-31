
#include <Servo.h>

#define RAIN_SENSOR 7   // Rain sensor digital output
#define SERVO_PIN 9     // Servo signal pin

Servo shelterServo;

void setup() {
  pinMode(RAIN_SENSOR, INPUT);
  shelterServo.attach(SERVO_PIN);
  shelterServo.write(0);   // Start at open position
}

void loop() {
  int rainDetected = digitalRead(RAIN_SENSOR);

  if (rainDetected == LOW) {  
    // Sensor usually gives LOW when wet (adjust if your module is opposite)
    shelterServo.write(90);  // Close shelter
  } else {
    shelterServo.write(0);   // Open shelter
  }

  delay(200); // Small delay for stability
}
