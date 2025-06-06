/**
 * Title: Vibration switch KY-002
 * Author: Laura Lizbeth Sanchez Ramirez
 * Comments: Used for signal detection using 
 * the vibration switch; if a signal is detected, 
 * the LED lights up.
 */

int Led = 2;          // Pin used for the card's LED
int interruptor = 13; // Pin used for the switch
int vibracion;        // Time variable used to measure switch vibration

void setup()
{
    pinMode(Led, OUTPUT);        // Configuring the LED as an output
    pinMode(interruptor, INPUT); // Configuring the switch as an input
    
        digitalWrite(interruptor, HIGH); // It is used to activate the internal resistance of the switch
    
}

void loop()
{
    vibracion = digitalRead(interruptor); // Reading digital values

    if (vibracion == HIGH)
    {
        // If a signal is detected, the LED turns on.
        digitalWrite(Led, LOW);
    }
    else
    {
        digitalWrite(Led, HIGH);
    }
}
