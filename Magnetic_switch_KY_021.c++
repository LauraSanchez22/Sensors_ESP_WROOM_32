/**
 * Title: Magnetic switch KY-021
 * Author: Laura Lizbeth Sanchez Ramirez
 * Comments: Used to turn on the LED on the
 * ESP WROOM 32 board when the KY-021 switch
 * detects a magnetic field.
 */

int Led = 2;               // For the LED on the plate
int interruptorKY021 = 13; // For the magnetic switch
int iman;                  // For magnetic field detection
void setup()
{
    /// Configuring the LED as an output
    pinMode(Led, OUTPUT);
    // Configuring the switch as an input
    pinMode(interruptorKY021, INPUT);
}

void setup()
{
    // Reading digital values
    iman = digitalRead(interruptorKY021);
    // If the switch detects a magnetic field, the LED lights up.
    if (iman == HIGH)
    {
        digitalWrite(Led, LOW);
    }
    else
    {
        digitalWrite(Led, HIGH);
    }
}