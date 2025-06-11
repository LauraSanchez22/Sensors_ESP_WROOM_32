/**
 * Title: KY-008 Laser Emitter
 * Author: Laura Lizbeth Sanchez Ramirez
 * Comments: Code used to activate and deactivate the laser sensor every second.
 */

int sensorlaserKY008 = 13; //Used to connect the laser signal pin


void setup() {              
  //Setting the laser as output 
  pinMode(sensorlaserKY008, OUTPUT);
}
void loop() {


  //The laser turns on
  digitalWrite(sensorlaserKY008, HIGH);
  delay(1000); //1 second delay
  //The laser turns off
  digitalWrite(sensorlaserKY008, LOW);
  delay(1000); //1 second delay
}
