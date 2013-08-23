
//function definitions-------------------------------------------------------------------
void displayTemperatures() {
  if ((millis() - timerTempMeasurement_) > 500) //update display every 500ms 
  {
    lcd.setCursor(0, 0);
    lcd.setCursor(0, 0);
    lcd.print("T:111.3 111.3 111.3");
    lcd.setCursor(2, 0);
    printTemperatureValue(THERMISTORPIN0);
    lcd.setCursor(8, 0);
    printTemperatureValue(THERMISTORPIN1);
    lcd.setCursor(14, 0);
    printTemperatureValue(THERMISTORPIN2);
    timerTempMeasurement_ = millis();
  }
}

void printTemperatureValue(int analog_Pin) {
  char temp_char[TEMPERATURE_DISPLAY_WIDTH]; //char to display temperature with max width of 6 (123.42 degrees)
  //convert to string with given precision
  dtostrf(measureTemperature(analog_Pin),TEMPERATURE_DISPLAY_WIDTH,TEMPERATURE_DISPLAY_PRECISION,temp_char);
  lcd.print(temp_char);
}

void displayFlow() {
  if ((millis() - timerFlowMeasurement_) > 500) //update display every 500ms 
  { 
    int total_flow = total_count_*0.307/60;
    unsigned long last_count_value;
    char flow_temp_char[FLOW_DISPLAY_WIDTH];
    lcd.setCursor(0,2);
    lcd.print("Flow: ");
    dtostrf(total_flow,FLOW_DISPLAY_WIDTH,FLOW_DISPLAY_PRECISION,flow_temp_char);//convert to string with given precision
    lcd.setCursor(6,2);
    lcd.print(flow_temp_char);
    
    int current_flow = 0.307*(total_count_ - last_count_value); //flow in L/min
    dtostrf(current_flow,FLOW_DISPLAY_WIDTH,FLOW_DISPLAY_WIDTH,flow_temp_char);//convert to string with given precision
    lcd.setCursor(12,2);
    lcd.print(flow_temp_char);
    
    timerFlowMeasurement_ = millis();
    last_count_value = total_count_;
  }
}

