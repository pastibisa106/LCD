#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(4, 0);
  lcd.print("Selamat Datang");
  lcd.setCursor(10, 1);
  lcd.print("RAFIQUL");
  lcd.setCursor(2, 2);
  lcd.print("AING LEGEND");
  lcd.setCursor(8, 3);
  lcd.print("RAQHA");
}
void loop()
{
  // Do nothing here...
}
