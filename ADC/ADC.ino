/*
 * connect photodiode           to Bit 1 PORT C
 *         potentialmeter       to Bit 2 PORT C
 *         temperature sensor   to Bit 3 PORT C
 *         photoresister        to Bit 4 PORT C
 *         VCC (Bit 9)          to Bit 9 PORT C 
 *         GND (Bit 8)          to Bit 8 PORT C
*/
int potPot = 2;
int ldrPot = 4;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); 
}

void loop() {
  //Read the value of the potentialmeter
  Serial.print("ADC: ");
  Serial.print(analogRead(potPot));
  Serial.print(" ");
  //Read the vlaue from the ldr
  Serial.print("LDR: ");
  Serial.print(analogRead(ldrPot));
  Serial.print("\n");
  delay(100);
}
