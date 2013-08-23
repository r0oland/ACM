//constants---------------------------------------------------------------------
const int FLOW_PIN = 2;
const int INTERVAL = 1000;

//declaration-------------------------------------------------------------------
void detectFlowmeterRotation(int flow_pin);
void calculateFlowmeterFrequency();
void printInfoToSerial();

boolean latch1_, latch2_ = false;

unsigned int window_count_ = 0;
unsigned long total_count_ = 0;

unsigned long current_millis_ = 0;
unsigned int current_frequency_ = 0;

//------------------------------------------------------------------------------
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

//------------------------------------------------------------------------------
void loop() {
  detectFlowmeterRotation(FLOW_PIN);
  calculateFlowmeterFrequency();
  printInfoToSerial();
}

//definition -------------------------------------------------------------------
void detectFlowmeterRotation(int flow_pin){
  if(digitalRead(flow_pin))
    latch1_=true;  
  if(!digitalRead(flow_pin))
    latch2_=true;
  
  if(latch1_ && latch2_){//only true after a rotation
    latch1_ = false;
    latch2_ = false;
    window_count_++;
    total_count_++;
  }
}

void calculateFlowmeterFrequency(){
  static unsigned long previous_millis_;
  
  if (millis() - previous_millis_ > INTERVAL) { //if within the rolling window INTERVAL
    previous_millis_ = millis();     //save last time the clock updated in previous_millis_
    current_frequency_ = window_count_ * (1000/INTERVAL);
    window_count_ = 0; //reset window counter, cumulative counters unaffected.
  }
}

void printInfoToSerial(){
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
}

