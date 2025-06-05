/**
 * Title: Led Flash KY-034 
 * Author: Laura Lizbeth Sanchez Ramirez
 * Comments: Color change every time the LED flashes.
 */

int Flash_led  =  13; //Pin 13 will be connected to the sensor signal pin
 
void setup  ( )
{
  //Configuring the LED flash as output
  pinMode (Flash_led, OUTPUT)  ;  
}

void loop  ( )  
{
  digitalWrite   (Flash_led, HIGH)  ;  //The LED starts with one color and changes to another color.
  delay (4000)  ;  //4s delay
  digitalWrite  (Flash_led, LOW) ;  //The LED turns off
  delay (4000)  ;  //4s delay
}
