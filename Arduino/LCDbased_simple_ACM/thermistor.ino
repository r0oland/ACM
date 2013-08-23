#include <math.h>

//function definitions-------------------------------------------------------------------
float measureTemperature(int analog_pin) {
  float resistance;  
  float temperature;
  
  resistance = ((1024 * PAD_RESISTANCE / analogRead(analog_pin)) - PAD_RESISTANCE); 
  temperature = B_PARAMETER /log(resistance/R_INFINITY);
  temperature = temperature - 273.15;  // Convert Kelvin to Celsius                      

  // BEGIN- Remove these lines for the function not to display anything
  //Serial.print("ADC: "); 
  //Serial.print(RawADC); 
  //Serial.print("/1024");                           // Print out RAW ADC Number
  //Serial.print(", vcc: ");
  //Serial.print(vcc,2);
  //Serial.print(", pad: ");
  //Serial.print(pad/1000,3);
  //Serial.print(" Kohms, Volts: "); 
  //Serial.print(((RawADC*vcc)/1024.0),3);   
  //Serial.print(", Resistance: "); 
  //Serial.print(Resistance);
  //Serial.print(" ohms, ");
  // END- Remove these lines for the function not to display anything

  return temperature;                                      // Return the Temperature
}
