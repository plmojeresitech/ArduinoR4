/* 
 * KY-009 RGB LED Module
 * Cycles through various colors
 */

int redPin = 11;
int greenPin = 10;
int bluePin = 9;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Red color (max brightness)
  setColor(255, 0, 0); 
  delay(1000);


  // Green color
  setColor(0, 255, 0); 
  delay(1000);

  // Blue color
  setColor(0, 0, 255); 
  delay(1000);

  // Purple (mix of red and blue)
  setColor(128, 0, 128);
  delay(1000);

  // White (all colors max)
  setColor(255, 255, 255);
  delay(1000);
}

void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}
