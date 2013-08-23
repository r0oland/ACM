/*
 Simple Advandced Computer Monitor

 Simple code for the Arduino, reading multiple temperatures,
 the flow of the flowmeter and displaying the values on an
 LCD display (20x4 right now).

 The LCD part of the code is based on the Hello World Example:
 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 */

#include <LiquidCrystal.h>
#include "thermistor.h"
#include <math.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(20, 4);
}

void loop() {
  lcd.setCursor(0, 0);
  if ((millis() - timerTempMeasurement) > 500)
  {  
    lcd.setCursor(0, 0);
    lcd.print("Temperatur Celsius: ");
    lcd.setCursor(0, 1);
    lcd.print(measureTemperature(THERMISTORPIN0));
    lcd.setCursor(0, 2);
    lcd.print(measureTemperature(THERMISTORPIN1));
    timerTempMeasurement = millis();
  }
}


