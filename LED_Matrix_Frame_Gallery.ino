#include "Arduino_LED_Matrix.h"  // Include the LED_Matrix library
ArduinoLEDMatrix matrix; // Create an instance of the ArduinoLEDMatrix class


void setup() {

Serial.begin(115200); // Initialize serial communication at a baud rate of 115200
matrix.begin(); // Initialize the LED matrix


}

void loop() {

matrix.loadFrame(LEDMATRIX_EMOJI_BASIC);
}
