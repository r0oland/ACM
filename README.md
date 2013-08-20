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
