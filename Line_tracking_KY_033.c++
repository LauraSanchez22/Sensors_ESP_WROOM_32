/**
 * Title: Line tracking KY-033 
 * Author: Laura Lizbeth Sanchez Ramirez
 * Comments: Used for detecting the colors 
 * of nearby objects and surfaces (white = 0, black = 1).
 */

int sensorky033 = 12; //Pin 12 is used for the sensor data pin


void setup()
{
//Serial communication is activated at 9600 baud
Serial.begin(9600);
}
 
void loop()
{
//Values ​​are shown in 0 and 1 (black and white)
Serial.print(digitalRead(sensorky033));
delay(1000); //1 second delay
}
