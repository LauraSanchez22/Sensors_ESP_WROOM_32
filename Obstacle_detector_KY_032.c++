/**
 * Title: Obstacle detector KY-032 
 * Author: Laura Lizbeth Sanchez Ramirez
 * Comments: Used for obstacle detection, 
 * if this type of signal is found the LED lights up.
 */

int detector_ky032 = 13; //LED pin
int sensor_giro = 12; //Pin that will detect obstacles
int temp_val; //Time value


void setup() {
  //Configuring the indicator LED as an output
  pinMode(detector_ky032, OUTPUT);
  //Configuring the sensor as input
  pinMode(sensor_giro, INPUT);
}


void loop() {
  //The digital values ​​of the signals emitted by the sensor are read.
  temp_val = digitalRead(sensor_giro);
  //If a signal is detected, the LED lights up.
  if(temp_val == LOW){
    digitalWrite(detector_ky032, HIGH);
  }else{
    digitalWrite(detector_ky032, LOW);
  }


}
