/*
 Simple Advandced Computer Monitor

 Simple code for the Arduino, reading multiple temperatures,
 the flow of the flowmeter and displaying the values on an
 LCD display (20x4 right now).

 The LCD part of the code is based on the Hello World Example:
 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 */

//includes---------------------------------------------------------------------

#include <LiquidCrystal.h>
#include "thermistor.h"
#include "globals.h"
#include "lcd_functions.h"

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(20, 4); //number of chars per line, number of lines
}

void loop() {
  displayTemperatures();
}


