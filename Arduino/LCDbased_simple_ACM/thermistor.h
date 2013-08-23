/*********************************************************************************
 **
 **  Provides functions to measure a temperature using a thermistor
 **  Written By:    Johannes Rebling, 2013
 **
 *********************************************************************************/

//includes---------------------------------------------------------------------
#include <math.h>

//constants---------------------------------------------------------------------

// Analog Pins
const int THERMISTORPIN0 = 0;
const int THERMISTORPIN1 = 1;
const int THERMISTORPIN2 = 2;

const float PAD_RESISTANCE = 10000;             // measured resistance of pad resistor
const float THERMOISTOR_RESISTANCE = 10000;    // nominal resistance of thermistor 
const float B_PARAMETER = 3434;                //B parameter as used in 
//https://en.wikipedia.org/wiki/Thermistor#B_or_.CE.B2_parameter_equation, from datasheet
// B-Constant (25-50°C): 3380, (25-80°C): 3428, (25-85°C): 3434, (25-100°C): 3455
const float AMBIENT_TEMP = 293.15;             //room temperature in Kelvin
const double R_INFINITY = THERMOISTOR_RESISTANCE * exp(-B_PARAMETER/AMBIENT_TEMP); //see link above

//declaration-------------------------------------------------------------------

/*********************************************************************************
 **  measureTemperature()
 **
 **  Function calculates temperature based on value measured via analog pin.
 **
 **  Input:  ADC pin
 **  Output: temperature
 *********************************************************************************/
float measureTemperature(int analog_pin);

