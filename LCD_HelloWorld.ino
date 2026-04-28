/*
 * Project: IskakINO_LiquidCrystal_I2C
 * Folder: examples/01_HelloWorld
 * Description: Basic example to demonstrate auto-addressing and simple text output.
 * Author: Iskak Fatoni
 */

#include <IskakINO_LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(16, 2);

void setup() {
  
  lcd.begin();         
  
  lcd.backlight();     

  lcd.setCursor(0, 0); 
  lcd.print("IskakINO Lib");

  lcd.setCursor(0, 1);
  lcd.print("01 HelloWorld");
}

void loop() {
  //
}
