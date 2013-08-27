#To Do

## Essentials:

### Add Water temperature meter

### monitor CPU, RAM and HDD with Arduino and in General
- java based, should work in Processing, give it a try:
http://stackoverflow.com/questions/47177/how-to-monitor-the-computers-cpu-memory-and-disk-usage-in-java where they recommend http://www.hyperic.com/products/sigar

- VB.net based (hence not really usefull...) using http://www.instructables.com/id/Arduino-CPURAM-usage-monitor-LCD/ or sth similar

## Get:
- try/get new Thermistors
http://www.ebay.de/itm/10x-NTC-Heissleiter-Thermistor-2k-60mW-55-155-C-RoHS-B57861S0202F040-/310364148634?pt=LH_DefaultDomain_77&hash=item484325139a
- larger Arduino Board: http://www.ebay.de/itm/SainSmart-Mega-2560-R3-ATmega2560-16AU-ATMEGA16U2-USB-Cabe-For-2013-Arduino-/230964470391?pt=Wissenschaftliche_Ger%C3%A4te&hash=item35c68e2277
- 2 x 140mm Lüfter für seitenwand 
- 2 x Noctua NF-F12 PWM Fan for Radiator
- 4 x Artic Cooling 120mm PWM fan for case
- Fan channel to get closer to CPU/RAM/VoltageConverters
- noice cancelation mats (once everything is sort of setup
- 

###Get from Reichelt
Fan Pin:
- https://secure.reichelt.de/Platinen-Steckverbinder/PSK-254-4W/3/index.html?&ACTION=3&LA=2&ARTICLE=694&GROUPID=5216&artnr=PSK+254%2F4W
Contacts:
- https://secure.reichelt.de/Platinen-Steckverbinder/PSK-KONTAKTE/index.html?ACTION=3&GROUPID=5216&ARTICLE=14861&SHOW=1&START=0&OFFSET=500&;PROVID=2402
Stecker:
- https://secure.reichelt.de/Platinen-Steckverbinder/PSS-254-4G/index.html?ACTION=3&GROUPID=5216&ARTICLE=696&SHOW=1&START=0&OFFSET=500&;PROVID=2402
4 Pin Kabel:
- https://secure.reichelt.de/Steuerleitung/LIYY-414-25/3/index.html?&ACTION=3&LA=2&ARTICLE=10367&GROUPID=3326&artnr=LIYY+414-25
General Purpose Litze:
- https://secure.reichelt.de/Kupferlitze-isoliert/2/index.html?&ACTION=2&LA=2&GROUPID=5043

## Feature Creap List:
### Get a better display, eg:
- SainSmart 3.2" TFT LCD Modul+Touch Panel
found at http://www.ebay.com/itm/SainSmart-3-2-TFT-LCD-Modul-Touch-Panel-PCB-adapter-SD-Reader-fur-Arduino-2560-/320934310788?ssPageName=STRK:MESE:IT
- jesus christ this is sooooooo coool:
https://www.youtube.com/watch?v=JXcVw8dwxPw

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

### Absolutely not necessay: Measure Air Presure
http://www.ebay.de/itm/Digita-BMP085-Module-Digitale-Luftdruck-GY-65-Sensor-Luftdruck-Modul-Arduino-UNO/390617561175?_trksid=p2047675.m2109&_trkparms=aid%3D555003%26algo%3DPW.CAT%26ao%3D2%26asc%3D29%26meid%3D847245134912602426%26pid%3D100010%26prg%3D1013%26rk%3D2%26rkt%3D15%26sd%3D230967372889%26
