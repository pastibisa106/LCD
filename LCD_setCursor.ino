#include <LiquidCrystal.h>

LiquidCrystal lcd (12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(2, 1);
  lcd.print("RAFIQUL HAKIM");
}

void loop() {

}
