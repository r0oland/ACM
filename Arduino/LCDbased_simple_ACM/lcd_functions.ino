
//function definitions-------------------------------------------------------------------
void displayTemperatures() {
  static unsigned long timer_temp_teasurement;
  if ((millis() - timer_temp_teasurement) > 1000) //update display every 500ms
  {    
    lcd.setCursor(0, 0);
    lcd.print("T:");
    printTemperatureValue(THERMISTORPIN0);
    printTemperatureValue(THERMISTORPIN1);
    printTemperatureValue(THERMISTORPIN2);
    
    timer_temp_teasurement = millis();
  }
}

//---------> printTemperatureValue <------------------------
void printTemperatureValue(int analog_Pin) {
  char temp_char[6]; //char to display temperature with max width of 6 (123.42 degrees)
  //convert to string with given precision
  dtostrf(measureTemperature(analog_Pin),6,2,temp_char);
  lcd.print(temp_char);
}

//---------> displayFlow <------------------------
void displayFlow() { //displays the following: xxxxxL w x.xxL/min
  static unsigned long timer_flow_teasurement;
  static unsigned long last_count_value;
  if ((millis() - timer_flow_teasurement) > 1000) //update display every 500ms
  {
    float total_flow = total_flow_count_*0.307/60;
    char temp_char[5]; //max char length = 5 chars

    dtostrf(total_flow,5,0,temp_char);//convert to string with precision 2 and store in temp_char
    lcd.setCursor(0,1);
    lcd.print(temp_char);
    lcd.setCursor(5,1);
    lcd.print("L with ");

    //calc total flow from difference in counts
    float current_flow = 0.307*(total_flow_count_ - last_count_value); //flow in L/min
    dtostrf(current_flow,4,1,temp_char);//convert to string with given precision
    //display current flow
    lcd.setCursor(6,1);
    lcd.print(" with "); //temp char now contains the current flow
    lcd.setCursor(11,1);
    lcd.print(temp_char); //print x.x
    lcd.setCursor(15,1);
    lcd.print("L/min");

    timer_flow_teasurement = millis();
    last_count_value = total_flow_count_;
  }
}

//---------> displayUptime <------------------------
void displayUptime() {//display Uptime:
  static unsigned long timer_uptime;
  if ((millis() - timer_uptime) > 250) //update display every 500ms
  {    
    char temp_char[6]; //max char length = 5 chars
    unsigned long uptime[] = {
      millis()/10,0,0,0,0    };

    lcd.setCursor(0,3);
    lcd.print("Uptime: ");
    lcd.setCursor(8,3);
    modulator(uptime);
    timePrinter(uptime);

    timer_uptime = millis();
  }
}


//---------> Modulator <------------------------
void modulator(unsigned long time[]){
  unsigned long seconds[] = {
    86400, 3600, 60    };

  for (int i=1; i<=4; i++)
  {
    time[i] = time[i-1]%seconds[i-1];
  }

  for (int n=3; n>0; n--)
  {
    time[n] = time[n-1]/seconds[n-1];
  }
}

//---------> TimePrinter <------------------------
void timePrinter(unsigned long displayTime[]){
  
  if (displayTime[1] > 0) //display time 01d44h
  {
    printTwoDigitsAndUnit (displayTime, 1);
    printTwoDigitsAndUnit (displayTime, 2);
  }
  else if (displayTime[2] > 0) //display time 12h44m
  {
    printTwoDigitsAndUnit (displayTime, 2);
    printTwoDigitsAndUnit (displayTime, 3);
  }
  else  //display time 02m22s
  {
    printTwoDigitsAndUnit (displayTime, 3);
    printTwoDigitsAndUnit (displayTime, 4);
  }
}

void printTwoDigitsAndUnit (unsigned long time_array[], byte time_to_print){
  char time_units[] = {"0dhms"};//0 added to make numbers aggree between time_array and time_units[]
  //i.e. time_array[1] corresponds to days, so time_units[1] should give "d"
  lcd.print(time_array[time_to_print]/10); //print second digit before coma, i.e. the 1 in 12
  lcd.print(time_array[time_to_print]%10); //print first digit before coma, i.e. the 2 in 12
  lcd.print(time_units[time_to_print]); //print correct unit (i.e. d,h,m or s)
}

//---------> cleaerLCD <------------------------
void clearLCD(){
  static unsigned long timer;
  if ((millis() - timer) > (1000*30)) //update display every 30s
  {
    lcd.clear(); 
    timer = millis();
  }
}

//---------> displayRPM <------------------------
void displayRPM(){
  static unsigned long timer;
  
  byte REFRESH_TIME = 5; //update every 5s
  if ((millis() - timer) > (1000*REFRESH_TIME)) //update every 5s cause value varies a lot...
  {
    lcd.setCursor(0,2);
    lcd.print("RPM: ");
    
    lcd.print(total_rpm_count_*60/REFRESH_TIME/2);//assuming two signals per revolution
    
    timer = millis();
    total_rpm_count_ = 0;
  }
}












