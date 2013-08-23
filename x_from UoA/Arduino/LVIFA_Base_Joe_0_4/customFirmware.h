/*********************************************************************************
 **
 **  LVIFA_Flowmeter_Firmware 
 **  Provides Functions For Interfacing With The Arduino Uno

 **  Written By:    Sam Kristoff - National Instruments
 **  Written On:    November 2010
 **  Last Updated:  Dec 2011 - Kevin Fort - National Instruments
 **
 **  Adapted for use only as flowmeter and thermometer by Johannes Rebling - UoA
 **  Changes made on: June 2012
 **
 **  This File May Be Modified And Re-Distributed Freely. Original File Content
 **  Written By Sam Kristoff And Available At www.ni.com/arduino.
 **
 *********************************************************************************/

//constants---------------------------------------------------------------------
const int FLOW_PIN = 2; //must be 2 for the interrupt to work

//declaration-------------------------------------------------------------------
void interruptFunction();

volatile unsigned long total_count_ = 0;

/*********************************************************************************
 **  interruptFunction()
 **
 **  Function is called when interrupt is triggered on digital pin 2 by a rising 
 **  signal
 **
 **  Input:  None
 **  Output: None
 *********************************************************************************/
void interruptFunction();

