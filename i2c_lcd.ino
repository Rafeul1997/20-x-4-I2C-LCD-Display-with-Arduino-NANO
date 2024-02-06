//designed_by_ARMALLICK
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("YOUTUBE");
  lcd.setCursor(5,1);
  lcd.print("GURU OF ");
  lcd.setCursor(5,2);
  lcd.print("MICROCONTROLLER");
  lcd.setCursor(0,3);
  lcd.print("SUBSCRIBE");
}


void loop()
{
}
