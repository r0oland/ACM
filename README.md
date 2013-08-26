# ACM - READ ME
ACM = Advandced Computer Monitor

## explain what this does:
This will one day be a big and mighty software suite which controlls your hole computer, shows you temperatures, comtrolls fan speeds, and much more. But for now, I just want to read the temperatures and flow speed of the stuff that is in there...

## flow meter details

Original code to read the flowmeters rotations came from:

<http://davebmiller.wordpress.com/2011/01/18/arduino-flowmeter/>

Was then cleaned up and replaced by myself until I stumbled upon

http://www.themakersworkbench.com/?q=node/399

where I discovered that Arduino also supports interupts. This simplified 
the code even more and is also more reliable in detecting the flowmeters 
rotation. 

Flowmeter used:
Koolance INS-FM17N

## thermistor details
- based on adapted Steinhart-Hart equation, can be found under https://en.wikipedia.org/wiki/Thermistor#B_or_.CE.B2_parameter_equation
- thermistor in use: NTC 10kOhm, Model number: NXFT15XH103FA2B025
-- datasheet: http://www.murata.com/products/catalog/pdf/r44e.pdf
-- digi-key: http://www.digikey.com/catalog/en/partgroup/nxft15/10785?mpart=NXFT15XH103FA2B025&vendor=490&WT.z_ref_page_type=Part%20Search&WT.z_ref_page_sub_type=Part%20Detail%20Page&WT.z_ref_page_id=0
-- B-Parameter: 3350–3399K

## PWM Fan Control Details
### Specifications
(from 4-Wire Pulse Width Modulation (PWM) Controlled Fans Specification)
- frequency: 25kHz

###Arduino PWM
see: http://arduino.cc/en/Tutorial/SecretsOfArduinoPWM
and http://playground.arduino.cc/Main/TimerPWMCheatsheet

pinMode(3, OUTPUT);
pinMode(11, OUTPUT);
TCCR2A = _BV(COM2A0) | _BV(COM2B1) | _BV(WGM21) | _BV(WGM20);
TCCR2B = _BV(WGM22) | _BV(CS22);
OCR2A = 180;
OCR2B = 50;

On the Arduino Duemilanove, these values yield:
Output A frequency: 16 MHz / 64 / (180+1) / 2 = 690.6Hz
Output A duty cycle: 50%
Output B frequency: 16 MHz / 64 / (180+1) = 1381.2Hz
Output B duty cycle: (50+1) / (180+1) = 28.2%
