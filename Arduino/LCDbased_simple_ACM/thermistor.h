/*********************************************************************************
 **
 **  Provides functions to measure a temperature using a thermistor
 **  Written By:    Johannes Rebling, 2013
 **
 *********************************************************************************/
#include <math.h>

//globals---------------------------------------------------------------------
unsigned long timerTempMeasurement = 0;

//constants---------------------------------------------------------------------

// Analog Pins
const int THERMISTORPIN0 = 0;
const int THERMISTORPIN1 = 1;
const int THERMISTORPIN2 = 2;
const int THERMISTORPIN3 = 3;  

const float VCC = 4.91;                        // set measured Vcc
const float PAD_RESISTANCE = 9850;             // measured resistance of pad resistor
const float THERMOISTOR_RESISTANCE = 10000;    // nominal resistance of thermistor 
const float B_PARAMETER = 3375;                //B parameter as used in 
//https://en.wikipedia.org/wiki/Thermistor#B_or_.CE.B2_parameter_equation
const float AMBIENT_TEMP = 293.15;             //room temperature in Kelvin
const double R_INFINITY = THERMOISTOR_RESISTANCE * exp(-B_PARAMETER/AMBIENT_TEMP); //see link above

//declaration-------------------------------------------------------------------

/*********************************************************************************
 **  thermistor()
 **
 **  Function calculates temperature based on value measured via analog pin.
 **
 **  Input:  ADC pin
 **  Output: temperature
 *********************************************************************************/
float measureTemperature(int analog_pin);


