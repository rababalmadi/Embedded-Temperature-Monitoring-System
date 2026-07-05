#include <Wire.h>
#include <Adafruit_LiquidCrystal.h>
Adafruit_LiquidCrystal lcd(0);
int TempPin=A0;
int RawValue;
float Voltage;
float Temp;

void setup()
{
  lcd.begin(16, 2);
  lcd.setBacklight(1);
  lcd.setCursor(0,0);  
}

void loop()
{
 RawValue=analogRead(TempPin);
  Voltage=RawValue*(5.0 / 1023.0);
  Temp=(Voltage-0.5)*100;
  lcd.setCursor(0,0);
   lcd.print("Temp:");
  lcd.print(Temp);
  lcd.print(" C");
 
}