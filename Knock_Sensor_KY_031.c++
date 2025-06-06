/**
 * Title: Knock Sensor KY-031 
 * Author: Laura Lizbeth Sanchez Ramirez
 * Comments: It detects vibrations from 
 * nearby elements; if so, the LED on the 
 * ESP WROOM 32 board lights up.
 */

int Led = 2;          // Pin used to use the LED on the board
int KnockSensor = 14; // Digital PIN for the Knock Sensor
int vibracion;        // Time variable to identify nearby vibration

void setup()
{
    pinMode(Led, OUTPUT);        // Configuration as output for the LED
    pinMode(KnockSensor, INPUT); // Configuration as input for sensor readings
}
void loop()
{
    vibracion = digitalRead(KnockSensor);        // Reads digital values
    if (vibracion == HIGH) // If a vibration signal is detected, the LED lights up.
        
    {
        digitalWrite(Led, LOW);
    }
    else
    {
        digitalWrite(Led, HIGH);
    }
}