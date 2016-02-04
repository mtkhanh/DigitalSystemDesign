
### "Hello World!"
This is an example to print "Hello World" using LCD 16x2 screen with Arduino Mega 2560 board 
<br><br>
Schematic :
http://www.tietopetri.fi/data/lcd.pdf
<br>
Detail :
http://www.tietopetri.fi/data/klcd.pdf
<br><br>
A register select (RS) pin that controls where in the LCD's memory you're writing data to. You can select either the data register, which holds what goes on the screen, or an instruction register, which is where the LCD's controller looks for instructions on what to do next.
<br><br>
A Read/Write (R/W) pin that selects reading mode or writing mode
<br><br>
An Enable pin that enables writing to the registers
<br><br>
8 data pins (D0 -D7). The states of these pins (high or low) are the bits that you're writing to a register when you write, or the values you're reading when you read.
<br><br>
For the code, we will use the LiquidCrystal Library for almost needed functions : https://www.arduino.cc/en/Reference/LiquidCrystal
<br><br>
####Hardware
* Tietopetri LCD 16x2 screen
* Arduino MEGA 2560 borad
<br><br>
####Circuit
* LCD RS     pin to digital pin 8
* LCD R/W    pin to ground
* LCD Enable pin to digital pin 2
* LCD D4     pin to digital pin 4
* LCD D5     pin to digital pin 5
* LCD D6     pin to digital pin 6
* LCD D7     pin to digital pin 7
