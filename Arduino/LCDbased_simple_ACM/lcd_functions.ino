
//function definitions-------------------------------------------------------------------
void displayTemperatures() {
  static unsigned long timer_temp_teasurement;
  if ((millis() - timer_temp_teasurement) > 1000) //update display every 500ms
  {
    lcd.setCursor(0, 0);
    lcd.setCursor(0, 0);
    lcd.print("T:");
    lcd.setCursor(2, 0);
    printTemperatureValue(THERMISTORPIN0);
    lcd.setCursor(8, 0);
    printTemperatureValue(THERMISTORPIN1);
    lcd.setCursor(14, 0);
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
    float total_flow = total_count_*0.307/60;
    char temp_char[5]; //max char length = 5 chars

    dtostrf(total_flow,5,0,temp_char);//convert to string with precision 2 and store in temp_char
    lcd.setCursor(0,1);
    lcd.print(temp_char);
    lcd.setCursor(5,1);
    lcd.print("L with ");

    //calc total flow from difference in counts
    float current_flow = 0.307*(total_count_ - last_count_value); //flow in L/min
    dtostrf(current_flow,4,1,temp_char);//convert to string with given precision
    //display current flow
    lcd.setCursor(6,1);
    lcd.print(" with "); //temp char now contains the current flow
    lcd.setCursor(11,1);
    lcd.print(temp_char); //print x.x
    lcd.setCursor(15,1);
    lcd.print("L/min");

    timer_flow_teasurement = millis();
    last_count_value = total_count_;
  }
}

//---------> displayUptime <------------------------
void displayUptime() {//display Uptime:
  static unsigned long timer_uptime;
  if ((millis() - timer_uptime) > 250) //update display every 500ms
  {
    char temp_char[6]; //max char length = 5 chars
    unsigned long uptime[] = {
      millis()/1000,0,0,0,0    };

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
    lcd.print(displayTime[1]/10);
    lcd.print(displayTime[1]%10);
    lcd.print("d");
    lcd.print(displayTime[2]/10);
    lcd.print(displayTime[2]%10);
    lcd.print("h");
  }
  else if (displayTime[2] > 0) //display time 12h44m
  {
    lcd.print(displayTime[2]/10);
    lcd.print(displayTime[2]%10);
    lcd.print("h");
    lcd.print(displayTime[3]/10);
    lcd.print(displayTime[3]%10);
    lcd.print("m");
  }
  else  //display time 02m22s
  {
    lcd.print(displayTime[3]/10);
    lcd.print(displayTime[3]%10);
    lcd.print("m");
    lcd.print(displayTime[4]/10);
    lcd.print(displayTime[4]%10);
    lcd.print("s");
  }
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











