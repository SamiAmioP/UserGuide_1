/* This program shows how to blink an LED, for that,
 * We use a LED and a 220 ohm Resistor.
*/


void setup() {
  // put your setup code here, to run once:

pinMode(8, OUTPUT); // We set the pin 8 as an OUTPUT.
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(8, HIGH); //Set the digital pin 8 HIGH/ON
delay(500);            //Set a time before going to the next step
digitalWrite(8, LOW);  //Set the digital pin 8 LOW/OFF
delay(500);            //Set a time before restart the loop 
}
