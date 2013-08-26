//http://arduino.cc/en/Tutorial/SecretsOfArduinoPWM
//http://playground.arduino.cc/Main/TimerPWMCheatsheet

int ledPin = 9;    // LED connected to digital pin 9
int analogPin = 4;     // potentiometer wiper (middle terminal) connected to analog pin 3
int sensorPin = A3;    // select the input pin for the potentiometer     // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup()  { 
  TCCR1B = TCCR1B & 0b11111000 | 0x01; //set to highest possible freq. for PWM on channel 9 & 10
} 

void loop()  { 
  sensorValue = analogRead(sensorPin);
  analogWrite(ledPin, sensorValue/4);         
}


