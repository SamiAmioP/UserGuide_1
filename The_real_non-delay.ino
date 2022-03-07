/* THE NON_DELAY: This program is meant to read two differents codes at the same time without being blocked by the ''Delay''.
 *  For the non-delay, we are using a RED LED, a push button and a 220 ohm Resistor.
 *  For the pushbutton, we are using a pushbutton, YELLOW LED and 220 ohm Resistor.
 *  
 *  The delay function will automatically stop the full program for the amount of time given. It stop us to make two tasks simultaneously. The millis function will allow the program to be multitask.
 */



int PushButton = 8;//set the PushButton to pin 8
int PushBstate;  // Set a variable where we can store a value.
int YELLOW = 6; //Set a Yellow Led as pin 6

int RED = 4;    // Set a Red Led as pin 4              
int intervalLED = 1000;   //Set the interval of 1000 millisecond.
unsigned long previousLED = 0;  //The value will be to long for a int variable, so we use unsigned long function
int LEDstate = LOW;       // Set the state of the LED, we want it to start LOW




void setup() {
  // put your setup code here, to run once:
pinMode(RED, OUTPUT);  // Set the Red Led as an OUTPUT.
pinMode(YELLOW, OUTPUT);  // Set the Yellow Led as an OUTPUT.
pinMode(PushButton, INPUT);     // Set the PushButton as an INPUT.
}

void loop() {
  // put your main code here, to run repeatedly:



  //LED loop
unsigned long LiveMillis = millis(); // millis() start when the Arduino is powered up.

 if(LiveMillis - previousLED >= intervalLED){ //if the LiveMillis subtracted by previousLED is greater or equal to the intevalLED
  previousLEd = LiveMillis;                   //then previousLED will equal to LiveMillis

  if (LEDstate == LOW) {  // The if statement will be trigger when its true.
    LEDstate = HIGH;  //The state will be high. LED ON
    
  } else {      // else will be trigger when the if statement is not true.
    LEDstate = LOW;  //The state will be low. LED OFF
}

digitalWrite(RED, LEDstate);    // The Red LED will Turn ON/OFF base to the state given.



// Push button loop
PushBstate= digitalRead(PushButton);  // Will Read the value at pin 8 and store it into PusBstate.

if (PushBstate == HIGH){           // If the the state of the pushbutton is High
  digitalWrite(YELLOW, HIGH);      // Turn ON the Yellow LED
}
  else{
   digitalWrite(YELLOW,LOW);       // Turn OFF the Yellow LED
  
}

}
