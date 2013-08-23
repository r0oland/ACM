/*********************************************************************************
 **
 **  Provides functions to display my values on the lcd
 **  Written By:    Johannes Rebling, 2013
 **
 *********************************************************************************/ 

//includes---------------------------------------------------------------------
#include <LiquidCrystal.h>
#include <stdlib.h> 
 
//constants---------------------------------------------------------------------
const int TEMPERATURE_DISPLAY_PRECISION = 1;
// width = 3 digits before dec. point + dec. point + precision digits
const int TEMPERATURE_DISPLAY_WIDTH = TEMPERATURE_DISPLAY_PRECISION + 4;

const int FLOW_DISPLAY_PRECISION = 2;
const int FLOW_DISPLAY_WIDTH = FLOW_DISPLAY_PRECISION + 3;
// width = 2 digits before dec. point + dec. point + precision digits
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

void displayFlow();



