void setup()
{
  Serial.begin(19200);
}

void loop(){
  unsigned long pin0 = random(0,100000000);
  Serial.print(pin0);
  Serial.print(" | ");
  Serial.write(pin0 >> 8);
  Serial.print(" | ");
  Serial.write(pin0 & 0xFF);
  Serial.println();
  delay(500);
}

