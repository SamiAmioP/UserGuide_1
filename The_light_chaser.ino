/* LIGHT CHASER: This program shows how to turn ON/OFF 3 LEDs one by one.
 * We are using 3 leds of different colours and 3 220 ohm resistors.
 */


int RedLED = 7;    //Set the Red LED to the pin 7 of the arduino.
int YellowLED = 8; //Set the Yellow LED to the pin 8 of the arduino.
int BlueLED = 9;   //Set the Blue LED to the pin 9 of the arduino.

void setup() {
  // put your setup code here, to run once:
pinMode(RedLED, OUTPUT);    //Set the red LED's pin as an OUTPUT.
pinMode(YellowLED, OUTPUT); //Set the red LED's pin as an OUTPUT. 
pinMode(BlueLED, OUTPUT);   //Set the red LED's pin as an OUTPUT.
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(RedLED, HIGH);     //The Red led will turn ON.
delay(1000);                    //Wait 1000 millisecond (1 second) before going to the next step.
digitalWrite(RedLED, LOW);      //The Red led will turn OFF.
delay(1000)
digitalWrite(YellowLED, HIGH);  //The Yellow led will turn ON.
delay(1000);
digitalWrite(YellowLED, LOW);   //The Yellow led will turn OFF.
delay(1000)
digitalWrite(BlueLED, HIGH);    //The Blue led will turn ON.
delay(1000);
digitalWrite(BlueLED, LOW);     //The BLue led will turn OFF.
delay(1000);                    //Wait 1000 millisecond (1 second) before restarting the loop.
}
