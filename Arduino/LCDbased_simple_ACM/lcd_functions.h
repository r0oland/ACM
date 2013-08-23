/*********************************************************************************
 **
 **  Provides functions to display my values on the lcd
 **  Written By:    Johannes Rebling, 2013
 **
 *********************************************************************************/

//#include "globals.h"
 
 
//constants---------------------------------------------------------------------
const int TEMPERATURE_DISPLAY_PRECISION = 1;
//declaration-------------------------------------------------------------------

/*********************************************************************************
 **  displayTemperatures()
 **
 **  displays the temperatures measured n the LCD Display
 **
 **  Input:  -
 **  Output: -
 *********************************************************************************/
void displayTemperatures();

/*********************************************************************************
 **  printTemperatureValue()
 **
 **  prints the temperature value with limited precision
 **
 **  Input:  thermistor analog pin
 **  Output: -
 *********************************************************************************/
void printTemperatureValue(int analog_Pin);



