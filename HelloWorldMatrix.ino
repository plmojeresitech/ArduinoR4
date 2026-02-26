#include "ArduinoGraphics.h"
#include "Arduino_LED_Matrix.h"
ArduinoLEDMatrix matrix;
 
void setup() {
 
 Serial.begin(115200);
 matrix.begin();
 matrix.beginDraw();
 
 matrix.stroke(0xFFFFFFFF);
 const char text[] = "PLM";
 matrix.textFont(Font_4x6);

 matrix.beginText(0, 1, 0xFFFFFF);
 matrix.println(text);
 matrix.endText();

 matrix.endDraw();

 delay(2000);
}

void loop() {

// Make it scroll!
 matrix.beginDraw();

 matrix.stroke(0xFFFFFFFF);
 matrix.textScrollSpeed(100);

// add the text
 const char text[] = "  Hello World!  ";
 matrix.textFont(Font_5x7);
 matrix.beginText(0, 1, 0xFFFFFF);
 matrix.println(text);
 matrix.endText(SCROLL_LEFT);

 matrix.endDraw();
}

