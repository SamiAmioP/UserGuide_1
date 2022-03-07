/* ANALOG INPUT: This program shows how an INPUT can change control the OUTPUT.
 *  We are using a potentionmeter as INPUT, LED as an OUTPUT and a resistor.
 *  The bit range of an LED is 0-255.
 *  The bit range of the Potentiometer is 0-1023.
 *  As the reference of arduino says, analogRead values go from 0 to 1023, analogWrite values from 0 to 255.
 *  We use math to scale the range. ( The value of the potentiometer / 4)
 */

int Pmeter = A2; //Set the potentiometer to analog input 2.
int LED = 10;    //Set the Led to digital output 10.
int Bright = 0;  //variable where the potentiometer's will be store.


void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT); //Set the led pin as an OUTPUT.
}

void loop() {
  // put your main code here, to run repeatedly:

Bright = analogRead(Pmeter); //Read and store the potentiometer value in the Bright
analogWrite(LED, Bright/4);  //Scale the value so it the LED could work.
}
