/*DIGITAL INPUT: This program shows how to print the value of an input.
 * We are using a push button and a 220 resistor.
 */


int val; // Set a variable where we can store a value.



void setup() {
  // put your setup code here, to run once:
pinMode(8, INPUT);  // Set the digital pin 8 as an INPUT.
Serial.begin(9600); // Establish a communication to be able to print.
}

void loop() {
  // put your main code here, to run repeatedly:

val = digitalRead(8);  // Will Read the value at pin 8 and store it to val.
println(val);          // Print the value of the variable.

}
