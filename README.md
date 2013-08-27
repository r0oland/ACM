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

## PWM Fan Control Details
### Specifications
(from 4-Wire Pulse Width Modulation (PWM) Controlled Fans Specification)
- frequency: 25kHz

###Arduino PWM
see: http://arduino.cc/en/Tutorial/SecretsOfArduinoPWM
and http://playground.arduino.cc/Main/TimerPWMCheatsheet

I am simply using the maximal possible frequency that can be achieved by using a PWM divider of 1, which results in a PWM frequency of 16Mhz/256/2 = 31.25kHz (i.e. 16MHz = freq. of Arduino, 255 = PWM counter counts to 255 + 1, 2 = idk). 31.25 is well above the recommended frequency of 25kHz but also works fine. I figured that to high is better than to low and I certainly can't hear the 31.25kHz. For lower freqencies around 20kHz you might hear an anoying beep sound. Long storry short, it works...

## FAN RPM
Just like the flow, the RPM value of the fan is measured using an external interrupt. 

## Temperature Measurement - Thermistor Details
- based on adapted Steinhart-Hart equation, can be found under https://en.wikipedia.org/wiki/Thermistor#B_or_.CE.B2_parameter_equation
- thermistor in use: NTC 10kOhm, Model number: NXFT15XH103FA2B025
-- datasheet: http://www.murata.com/products/catalog/pdf/r44e.pdf
-- digi-key: http://www.digikey.com/catalog/en/partgroup/nxft15/10785?mpart=NXFT15XH103FA2B025&vendor=490&WT.z_ref_page_type=Part%20Search&WT.z_ref_page_sub_type=Part%20Detail%20Page&WT.z_ref_page_id=0
-- B-Parameter: 3350–3399K
