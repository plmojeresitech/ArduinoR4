const int rledPin = 7; 
const int yledPin = 8; 
const int gledPin = 9; 

void setup() {
// Set all LED pins as output
pinMode(rledPin, OUTPUT);
pinMode(yledPin, OUTPUT);
pinMode(gledPin, OUTPUT);
}

void loop() {
// Red LED on for 3 seconds
digitalWrite(rledPin, HIGH);
delay(3000);
digitalWrite(rledPin, LOW);

// Yellow LED blinks three times
for (int i = 0; i < 3; i++) {
 digitalWrite(yledPin, HIGH);
 delay(500);
 digitalWrite(yledPin, LOW);
 delay(500);
 }
// Green LED on for 3 seconds
digitalWrite(gledPin, HIGH);
delay(3000);
digitalWrite(gledPin, LOW);
}
