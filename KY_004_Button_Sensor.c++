/**
 * Title: KY-004 Button Sensor
 * Author: Laura Lizbeth Sanchez Ramirez
 * Comments: Used to turn the LED on and off with a push button.
 */

int pulsador = 12; //Pin 12 will be used to connect the push button
int valorled; // Numeric value for the LED
 
void setup() {
  //Configuring the LED as an output
  pinMode(LED_BUILTIN,OUTPUT);
  //Configuring the push button as an input
  pinMode(pulsador,INPUT);
  }
void loop() {
// The state of the push button is identified                
  valorled = digitalRead(pulsador);
// If the button is pressed
  if(valorled == HIGH)
  {
    //The LED lights up
    digitalWrite(LED_BUILTIN,HIGH);
  }
else
  {
    //Otherwise the LED turns off.
    digitalWrite(LED_BUILTIN,LOW);  
  }
}
