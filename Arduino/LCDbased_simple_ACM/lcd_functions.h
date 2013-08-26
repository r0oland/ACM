/*********************************************************************************
 **
 **  Provides functions to display my values on the lcd
 **  Written By:    Johannes Rebling, 2013
 **
 *********************************************************************************/ 

//includes---------------------------------------------------------------------
#include <LiquidCrystal.h>
#include <stdlib.h> 
 
//declaration-------------------------------------------------------------------

/*********************************************************************************
 **  displayTemperatures
 **
 **  displays the temperatures measured n the LCD Display
 **
 **  Input:  -
 **  Output: -
 *********************************************************************************/
void displayTemperatures();

/*********************************************************************************
 **  printTemperatureValue
 **
 **  prints the temperature value with limited precision
 **
 **  Input:  thermistor analog pin
 **  Output: -
 *********************************************************************************/
void printTemperatureValue(int analog_Pin);

/*********************************************************************************
 **  printTemperatureValue()
 **
 **  prints the current and total flow 
 **
 **  Input: - 
 **  Output: -
 *********************************************************************************/
void displayFlow();

/*********************************************************************************
 **  displayUptime()
 **
 **  displays the current UpTime
 **
 **  Input: - 
 **  Output: -
 *********************************************************************************/
void displayUptime();

/*********************************************************************************
 **  modulator()
 **
 **  calculates times that are given in seconds and puts 
 **  them into an array in the following maner 
 **  array[]=={seconds, seconds/10, minutes/10, minutes, hours}
 **
 **  Input: - 
 **  Output: -
 *********************************************************************************/
 void modulator(unsigned long time[]);
 
 /*********************************************************************************
 **  timePrinter()
 **
 **  displays time stored in the time array from the modulator function
 **  as d:hh, hh:mm or mm:ss depending on time in array (larges value counts)
 **
 **  Input: displayTime array, array[]=={seconds, seconds/10, minutes/10, minutes, hours}
 **  Output: -
 *********************************************************************************/
 void timePrinter(unsigned long displayTime[]);
 
  /*********************************************************************************
 **  timePrinter()
 **
 **  clears the LCD once every 30s
 **
 **  Input: -
 **  Output: -
 *********************************************************************************/
 void clearLCD();






