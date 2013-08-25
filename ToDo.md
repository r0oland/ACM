#To Do

## Essentials:

### controll fans by PWM
- see pdf file in info_material 

### monitor CPU, RAM and HDD with Arduino and in General
- java based, should work in Processing, give it a try:
http://stackoverflow.com/questions/47177/how-to-monitor-the-computers-cpu-memory-and-disk-usage-in-java where they recommend http://www.hyperic.com/products/sigar

- VB.net based (hence not really usefull...) using http://www.instructables.com/id/Arduino-CPURAM-usage-monitor-LCD/ or sth similar

## Get:
- try/get new Thermistors
http://www.ebay.de/itm/10x-NTC-Heissleiter-Thermistor-2k-60mW-55-155-C-RoHS-B57861S0202F040-/310364148634?pt=LH_DefaultDomain_77&hash=item484325139a

## Feature Creap List:

### high precision thermistor measurements
* using 6-Channel, Low Noise, Low Power, 24-/16-Bit ADC with On-Chip In-Amp and Reference:
http://www.analog.com/static/imported-files/Data_Sheets/_7795.pdf
* has a SPI interface, no nice Arduino examples though...
* used the same chip, but for a different purpose:
https://github.com/casainho/Smart-Scale
* look here for void *readADCValues(void *ptr),I don't really understand it though...
https://github.com/everycook/EveryCook_RaspberryPi_Daemon/blob/master/daemon/daemon.c

### 7-Segment Displays
* http://datasheets.maximintegrated.com/en/ds/MAX7219-MAX7221.pdf
* https://www.mikrocontroller.net/articles/LED-Matrix

### Illumination for case using LED strip, controlled by Android
* http://makezine.com/projects/android-arduino-led-strip-lights/
