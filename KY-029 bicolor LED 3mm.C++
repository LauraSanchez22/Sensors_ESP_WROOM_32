/**
 * Title: KY-029 bicolor LED 3mm
 * Author: Laura Lizbeth Sanchez Ramirez
 * Comments: Color change on a bicolor LED every second
 */

int rojo = 15; //For the LED to be red
int verde = 4; //For the LED to be green
void setup ()
{
//Configuring bicolor LED colors as outputs
pinMode (rojo, OUTPUT);
pinMode (verde, OUTPUT);
}
void loop ()
{
//While the LED is lit with the red color
digitalWrite (rojo, HIGH); // LED is switched on
//The green color will remain off
digitalWrite (verde, LOW);
delay (1000); //There is a 1 second delay between each change
de color
//The color will change from red to green.
digitalWrite (rojo, LOW); //Inactive red
digitalWrite (verde, HIGH); //Active green
delay (1000); //There is a 1-second delay between each color change.
}