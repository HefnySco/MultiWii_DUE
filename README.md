MultiWii DUE
============

This project aims to porting multiwii code version 2.3 to [Arduino DUE](http://arduino.cc/en/Main/ArduinoBoardDue).

This provides 32-bit ARM core for multiwii that can outperform typical 8-bit microcontroller boards. 
The most significant differences are:
A 32-bit core, that allows operations on 4 bytes wide data within a single CPU clock. (for more information look int type page).
CPU Clock at 84Mhz.
96 KBytes of SRAM.
512 KBytes of Flash memory for code.


Challenges for DUE
==================

1- Unlike ancessor Arduino boards, you do not have EEPROM here so you canot easily store your settings which is essential for flying.

   I saw this issue solved for the first time for me in Naze32, they used flash memory as EEPROM, so I made some google search and found similar library for Arduino DUE, I made minor tweeks for it and it works well.


2- 3.3V !!! Arduino Due cannot output 5V from pins and also has limited current.
    
   That was the major issue for me till I saw [that project](http://fluentart.com/building-a-quadcopter/), which is the first one I saw for DUE. The developer seems never had issues with 3.3V so I deceided to follow his approach and take my chance.



3-  
