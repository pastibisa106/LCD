#include <LiquidCrystal.h>
LiquidCrystal lcd (2, 3, 4, 5, 6, 7); // pin yang digunakan

void setup() {
  // put your setup code here, to run once:
  // set up the LCD's number of columns and rows
  lcd.begin(16, 2); // yang digunakan lcd 16x2
  lcd.setCursor(0, 0); // BARIS PERTAMA
  lcd.print("RAFIQUL HAKIM"); 
  lcd.setCursor(3, 1); // baris kedua
  lcd.print ("RAFIQUL HAKIM");
}

void loop() {
  // put your main code here, to run repeatedly:

}
