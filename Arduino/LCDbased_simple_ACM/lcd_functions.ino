#include <LiquidCrystal.h>
#include <stdlib.h>

//function definitions-------------------------------------------------------------------
void displayTemperatures() {

  lcd.setCursor(0, 0);
  if ((millis() - timerTempMeasurement_) > 500)
  {
    lcd.setCursor(0, 0);
    lcd.print("Temperatur: ");
    lcd.setCursor(0, 1);
    printTemperatureValue(THERMISTORPIN0);
    lcd.setCursor(0, 2);
    printTemperatureValue(THERMISTORPIN1);
    lcd.setCursor(0, 3);
    printTemperatureValue(THERMISTORPIN2);
    timerTempMeasurement_ = millis();
  }
}

void printTemperatureValue(int analog_Pin) {
  char temp_char[6]; //char to display temperature with max width of 6 (123.42 degrees)
  dtostrf(measureTemperature(analog_Pin),6,TEMPERATURE_DISPLAY_PRECISION,temp_char);//convert to string with given precision
  lcd.print(temp_char);
}

