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
#include "sensing.h"
#include "globals.h"
#include "lcd_functions.h"

LiquidCrystal lcd(12, 11, 13, 4, 8, 7);

void setup() {
  delay(3000); //give computer time to start up
  lcd.begin(20, 4); //number of chars per line, number of lines
  attachInterrupt(0, increaseFlowCounter, RISING); //attach interrupt to pin 2
  attachInterrupt(1, increaseRPMCounter, RISING); //attach interrupt to pin 3
  analogReference(EXTERNAL); //set to external reference to use the correct
  //5V signal, since it is important for temp. meas acquracy
  
  // FIXXME (<JR, 26.09.2013 >) -> <just hard wired PWM controll to have fan not super loud>
  TCCR1B = TCCR1B & 0b11111000 | 0x01; //set to highest possible freq. for PWM on channel 9 & 10
  analogWrite(9, 130);      
   // FIXXME (<JR, 26.09.2013 >)
}

void loop() {
  displayTemperatures();
  displayFlow();
  displayUptime();
  displayRPM();
}



