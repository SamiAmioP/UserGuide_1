/* ANALOG INPUT RGB: This program shows how we can change the colour of an LED by using a potentiometer
 * We are using a potentiometer as INPUT, RGB LED as an OUTPUT and 3 resistors.
 * We give a range value for each colour, when the potentiometer's value will be between 300-700, it will be red for example.
 */

 

int Pmeter = A2; //Set the Potentiometer to analog input A2
int val = 0;     //Set a variable where it can store value

int R = 5;       //Set the RED LED to  pin 5
int G = 4;       //Set the GREEN LED pin 4
int B = 3;       //Set the BLUE LED to  pin 3

void setup() {
  // put your setup code here, to run once:
pinMode(R, OUTPUT);//Set the RED pin as an OUTPUT
pinMode(G, OUTPUT);//Set the GREEN pin as an OUTPUT
pinMode(B, OUTPUT);//Set the BLUE pin as an OUTPUT
}

void loop() {
  // put your main code here, to run repeatedly:
val = analogRead(Pmeter); //Read and store the potentiometer's value

if (val/4 < 85){             //If the val is under 85, the R led will be ON
digitalWrite(R, HIGH);

}
else if(val/4 >= 85 < 170){  //If the val is greater or equal to 85 and less than 170, the G led will be ON
digitalWrite(G, HIGH);
}

else(val/4 >= 170 =< 255){    //If the val is greater or equal to 170 and less or equal to 255 , the B led will be ON
digitalWrite(B, HIGH);
}
}
