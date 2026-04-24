/*
 * Project: IskakINO_LiquidCrystal_I2C
 * Folder: examples/01_HelloWorld
 * Description: Basic example to demonstrate auto-addressing and simple text output.
 * Author: Iskak Fatoni
 */

#include <IskakINO_LiquidCrystal_I2C.h>

// Inisialisasi: (Jumlah Kolom, Jumlah Baris)
// Alamat I2C akan dicari otomatis oleh library
LiquidCrystal_I2C lcd(16, 2);

void setup() {
  // 1. Inisialisasi I2C dan LCD
  // Memanggil fungsi _scanAddress() secara internal
  lcd.begin();         
  
  // 2. Menyalakan Lampu Latar
  lcd.backlight();     

  // 3. Menampilkan Pesan di Baris Pertama (0)
  lcd.setCursor(0, 0); 
  lcd.print("IskakINO Lib");

  // 4. Menampilkan Pesan di Baris Kedua (1)
  lcd.setCursor(0, 1);
  lcd.print("01 HelloWorld");
}

void loop() {
  // Loop kosong untuk contoh dasar
}
