//measureTemperature-------------------------------------------------------------------
float measureTemperature(int analog_pin) {
  float resistance;  
  float temperature;
  
  resistance = ((1024 * PAD_RESISTANCE / analogRead(analog_pin)) - PAD_RESISTANCE); //voltage divider
  temperature = B_PARAMETER /log(resistance/R_INFINITY); // B parameter equation
  temperature = temperature - 273.15;  // Convert Kelvin to Celsius                      
  
  return temperature; 
}

//increaseFlowCounter-------------------------------------------------------------------
void increaseFlowCounter(){
  total_flow_count_++;
}
  
//increaseRPMCounter-------------------------------------------------------------------
void increaseRPMCounter(){
  total_rpm_count_++;
}
