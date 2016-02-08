### Joystick
This is an example of using Joystick with Arduino Mega 2560 board
<br><br>
Schematic: http://www.tietopetri.fi/data/3d.pdf
<br>
Detail: http://www.tietopetri.fi/data/k3d.pdf
<br><br>
A joystick is just two potentialmeters that return analog values.
<br><br>
In this example,we will use Serial Monitor of Arduino board to display the values of two potentialmeter and the switch
<br><br>
When the joystick is resting in the middle, the value of X and Y axis should be about 512 and the value is between 0 and 1024. The switch has 2 states: closed and opened.
<br><br>
#### Hardware
* Tietopetri 3D-Levy Joystick
* Arduino Mega 2560 board

<br>
#### Circuit
* KYTKIN  - Switch    Bit 0
* PYSTY   - UPDOWN    Bit 1
* VAAKA   - RIGHTLEFT Bit 2


