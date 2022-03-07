/* ANALOG OUTPUT: This program shows how to fade the brightess of an LED. 
 *  We are using an LED and a Resistor of 220 ohm.
 *  We give a value a low value, and greater values after until it goes to the max which is 255.
 *  The bit range of a LED is 0-255.
 */



void setup() {
  // put your setup code here, to run once:
pinMode(5, OUTPUT); // Set analog pin 5 as an OUTPUT
}

void loop() {
  // put your main code here, to run repeatedly:

analogWrite(5, 30);
analogWrite(5, 60);
analogWrite(5, 120);
analogWrite(5, 180); //Give value between 0-255 to control the brightess of the LED. 
analogWrite(5, 240);
analogWrite(5, 255);

}
