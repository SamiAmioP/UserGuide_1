/* THE OHMMETER: This program shows how to find the Ohm value of a resistor and the symbol itself. The purpose its to find the resistance of an unknown resistor and
 * display both on the LCD and the serial monitor.  
 * To proceed, we will need to use math function to find the unknown resistance.
 */


float R1 = 220.0; //Set the first Resistor to 220 ohm
float R2 = 0.0;   //Set the second Resistor as a variable where it can store a value.
float Vol = 5.0;  //Set the voltage input of 5V
float BitVal = 0; //Set a variable where it can store the bit value. (0-1023)
float VolVal = 0; //Set a variable where it can store any the voltage value. (0-5)



#include <LiquidCrystal.h> // Include the lcd code from the library.

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //Set the pin going to be used by the lcd.


byte customChar[] = {                  //This the customisation of the ohm symbol from a website
  B00000,                              //Draw a symbol and copy the code for it.   
  B00000,
  B00000,
  B01110,
  B10001,
  B10001,
  B01010,
  B11011
};



void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); //Establish a communication to be able to print in the serial monitor

lcd.begin(16, 2);   //Establish a communication between the lcd and the code, and allow to use the 16 character and the 2 rows.
lcd.home();


}


void loop() {
  // put your main code here, to run repeatedly:

  
  // Math part / Ohmmeter
BitVal = analogRead(analogInput); //Read and store the bit value into BitVal
Serial.print(BitVal); //Print on the serial monitor

Serial.print("\t"); //Print a gap on the serial monitor
float VolVal = BitVal * (Vol / 1023.0); // This math allow to convert the bit value into voltage. Since 5V equals 1023, you divided this and times it the bit value given.
Serial.print(VolVal);

Serial.print("\t"); //Print a gap on the serial monitor
float R2 = R1 * (1/((Vin/VolVal)-1)); // This math allow to find the missed resistance. 
Serial.println(R2); //Print the second resistor value on the serial monitor.

// print lcd part
lcd.print("Second resistor value") //Print the words on the first row of the LCD
 lcd.setCursor(0, 1); //Set the cursor to the next row at the left.
 lcd.print("R =") //Print the words ont the second row of the LCD
 lcd.print(R2); //Print the value stored into the R2 variable.
 //Display the symbol after
 lcd.write(byte (0)); 
 lcd.createChar(0, customChar);    //Display the symbol

}
