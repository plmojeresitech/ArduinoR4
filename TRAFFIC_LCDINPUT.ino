#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display.
// Note: If 0x27 doesn't work, try 0x3F, as these are the two most common addresses.
LiquidCrystal_I2C lcd(0x27, 16, 2); 

const int rledPin = 7; 
const int yledPin = 8; 
const int gledPin = 9; 

void setup() {
// Set all LED pins as output
pinMode(rledPin, OUTPUT);
pinMode(yledPin, OUTPUT);
pinMode(gledPin, OUTPUT);

//SERIAL MONITOR
// Initialize serial communication at 9600 bits per second
  Serial.begin(9600);
  
  // Initialize the LCD
  lcd.init();
  
  // Turn on the backlight
  lcd.backlight();
  
  // Print a welcome message
  lcd.setCursor(0, 0);
  lcd.print("Awaiting Input..");
  Serial.println("Type something in the Serial Monitor and press Enter!");



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


// Check if data is available to read from the Serial port
  if (Serial.available() > 0) {
    
    // Read the incoming text until a newline character is received
    String input = Serial.readStringUntil('\n');
    
    // Optional: Trim whitespace and carriage returns from the end
    input.trim();
    
    // Clear the LCD screen for the new message
    lcd.clear();
    
    // Print the first 16 characters on the first line
    lcd.setCursor(0, 0);
    lcd.print(input.substring(0, 16));
    
    // If the message is longer than 16 characters, print the rest on the second line
    if (input.length() > 16) {
      lcd.setCursor(0, 1);
      lcd.print(input.substring(16, 32));
    }
    
    // Echo back to the Serial Monitor to confirm receipt
    Serial.print("Displayed: ");
    Serial.println(input);
  }



}
