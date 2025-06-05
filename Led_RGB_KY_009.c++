/**
 * Title:  Led RGB KY-009 
 * Author: Laura Lizbeth Sanchez Ramirez
 * Comments: It displays the colors red, green, 
 * and blue, in which each of them is displayed 
 * one after the other along with a 1 second delay 
 * between the color changes.
 */

int rojo = 15; //Pin 15 will be for the red color
int verde = 5; //Pin 5 will be for the green color
int azul = 4; //Pin 4 will be for the blue color
 
void setup ()
{
  //Configuring the colored pins as outputs
  pinMode (rojo, OUTPUT);
  pinMode (verde, OUTPUT);
  pinMode (azul, OUTPUT);
}
 
void loop ()
{
  digitalWrite (rojo, HIGH); //Active red
  digitalWrite (verde, LOW); //Inactive green
  digitalWrite (azul, LOW); //Inactive blue
  delay (1000); //1 second delay between each color change
 
  digitalWrite (rojo, LOW); //Inactive red
  digitalWrite (verde, HIGH); //Active green
  digitalWrite (azul, LOW); //Inactive blue
  delay (1000); //1 second delay between each color change
   
  digitalWrite (rojo, LOW); //Inactive red
  digitalWrite (verde, LOW); //Inactive green
  digitalWrite (azul, HIGH); //Active blue
  delay (1000); //1 second delay between each color change
}
