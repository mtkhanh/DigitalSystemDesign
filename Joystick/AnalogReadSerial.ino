/*
 * Connect joystick to PORTC
 * Bit0 : KYTKIN - Switch
 * Bit1 : PYSTY  - Vertical 
 * Bit2 : VAAKA  - Horizontal
*/


// Arduino pin numbers
const int SW_pin = 0; // analog pin connected to switch - A0
const int X_pin = 2;  // analog pin connected to X output  - A2
const int Y_pin = 1;  // analog pin connected to Y output  - A1

void setup() {
  // set the data rate in bits per second
  Serial.begin(115200);
}
 
void loop() {
  // initialize state value
  int state;   
  
  // read the analog value from the input pin
  state = analogRead(SW_pin);
  
  // check if the state = 0 so it is closed , if not so it is opened. 
  Serial.print("Switch:  "); 
  state == 0 ? (Serial.print("closed.")) : (Serial.print("open."));
  Serial.print("\n");
  
  // read the analog value of X-axis 0->1023(left to right) 
  Serial.print("X-axis: ");
  Serial.print(analogRead(X_pin));
  Serial.print("\n");
  
   // read the analog value of Y-axis 0->1023(down to up) 
  Serial.print("Y-axis: ");
  Serial.println(analogRead(Y_pin));
  Serial.print("\n\n");
  
  // delay 100ms
  delay(100);
}
