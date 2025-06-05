/**
 * Title: Led 5mm KY-011 2-Color
 * Author: Laura Lizbeth Sanchez Ramirez
 * Comments: Color change from red to green on KY-011 sensor.
 */

int rojo = 15; //Red LED
int verde = 4; //Green LED
 
void setup ()
{
  //Configuring bicolor LED colors as outputs
  pinMode (rojo, OUTPUT);
  pinMode (verde, OUTPUT);
}
 
void loop ()
{
  //First the red color appears
  digitalWrite (rojo, HIGH); 
  //Then the green color appears
  digitalWrite (verde, LOW);
  delay (2000); //There is a 1 second delay between each color change.
 
  //The color will change from red to green.
  digitalWrite (rojo, LOW);  //Inactive red
  digitalWrite (verde, HIGH); //Active green
  delay (2000); //There is a 1 second delay between each color change.


}
