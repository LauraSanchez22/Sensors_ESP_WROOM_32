/**
 * Title: Relay 5V KY-019
 * Author: Laura Lizbeth Sanchez Ramirez
 * Comments: Used to activate the relay 
 * when there is power supply to the circuit 
 * and deactivate it when there is no power.
 */

int relay = 12; // Pin 12 is connected to send relay activation
 
void setup ()
{
  //The relay pin is configured as an output
  pinMode (relay, OUTPUT); 
}

void loop ()
{
  //The relay is activated (the LED on the board lights up)
  digitalWrite (relay, HIGH); // "NO"
  delay (1000);
  digitalWrite (relay, LOW); // "NC"
  delay (1000);
}
