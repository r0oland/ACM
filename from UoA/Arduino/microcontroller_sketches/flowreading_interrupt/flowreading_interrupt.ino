//constants---------------------------------------------------------------------
const int FLOW_PIN = 2; //must be 2 for the interrupt to work
const int INTERVAL = 1000; 

//declaration-------------------------------------------------------------------
void interruptFunction();
void calculateFlowmeterFrequency();
//void printInfoToSerial();

volatile unsigned int window_count_ = 0;
volatile unsigned long total_count_ = 0;

unsigned long previous_millis_ = 0;
unsigned int current_frequency_ = 0;

//------------------------------------------------------------------------------
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  attachInterrupt(0, interruptFunction, RISING);
}

//------------------------------------------------------------------------------
void loop() {
  calculateFlowmeterFrequency();
}

//function definitions-------------------------------------------------------------------
void interruptFunction(){
  window_count_++;
  total_count_++;
}

void calculateFlowmeterFrequency(){
  static unsigned long previous_millis_;
  
  if (millis() - previous_millis_ > INTERVAL) { //if within the rolling window INTERVAL
    previous_millis_ = millis();     //save last time the clock updated in previous_millis_
    current_frequency_ = window_count_ * (1000/INTERVAL); //works for all interval values
    window_count_ = 0; //reset window counter, cumulative counters unaffected.
  }
}

/*void printInfoToSerial(){
  static unsigned long previous_millis_;
  
  if (millis() - previous_millis_ > INTERVAL) { //if within the rolling window INTERVAL
    previous_millis_ = millis();     //save last time the clock updated in previous_millis_
    Serial.print("total_count_: ");
    Serial.print(total_count_);
    Serial.print(" | ");
    Serial.print("window_count_: ");
    Serial.print(current_frequency_);
    Serial.println();
  }
}*/


