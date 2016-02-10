### "ADC ADC"
This is an example of using ADC to read analog values from 4 inputs: a potentialmeter, a photoresister, a temperature sensor and a photodiode.The valua of each input will be in the range from 0 - 1023 (8 bit).
<br><br>
Schematic: http://www.tietopetri.fi/data/adc.pdf.
<br>
Detail: http://www.tietopetri.fi/data/kadc.pdf.
<br><br>
The change of voltage from 0 to 5 volts of input device will be converted to a number from 0 to 1023. We will use analogRead() function to return also a number from 0 to 1023 that is proportional to the amount of voltage being applied to the pin.
#### Hardware
* Tietopetri ADC-levy
* Arduino Mega 2560 board

<br>
#### Circuit
* VALO  : Photodiode         - Bit 1 
* LAMPO : Temperature sensor - Bit 3 
* POT   : Potentialmeter     - Bit 2
* LDR   : Photoresister      - Bit 4
