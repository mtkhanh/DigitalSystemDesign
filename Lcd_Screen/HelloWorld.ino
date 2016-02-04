/*
  The circuit:
 ** connect the lcd to PORTD and BIT0 + BIT 8 from PORTB 
 * LCD RS pin to digital pin 8 bit 0 PORTB
 * LCD Enable pin to digital pin 2 bit 2 PORTD
 * LCD D4 pin to digital pin 4     bit 4 PORTD
 * LCD D5 pin to digital pin 5     bit 5 PORTD
 * LCD D6 pin to digital pin 6     bit 6 PORTD
 * LCD D7 pin to digital pin 7     bit 7 PORTD
 * LCD R/W pin to ground           bit 8 PORTB
 * 10K resistor:
 * ends to +5V and ground
*/
#include <LiquidCrystal.h>

// Initialize LCD with following connections
LiquidCrystal lcd(8, 2, 4, 5, 6, 7);

void setup() {
  // Setup LCD Size : Columns, Rows
  lcd.begin(16, 2);
  // Display a message on the LCD.
  lcd.print("Hello world");
}

void loop() {
  // Set position of the cursor to column 0, line 1
  // Note : Counting starts from 0

}
