/**
 * Title: Buzzer KY-12
 * Author: Laura Lizbeth Sanchez Ramirez
 * Comments: Used to turn the KY-12 buzzer on and off.
 */

int BuzzerKY012 = 12; // Pin used for the buzzer signal

void setup()
{
    pinMode(BuzzerKY012, OUTPUT); // Setting the buzzer as an output
}

void loop()
{
    digitalWrite(BuzzerKY012, HIGH); // The buzzer turns on
    // After the tone is heard, there is a 4 second delay
    delay(4000);
    digitalWrite(BuzzerKY012, LOW); // The buzzer goes off
    delay(2000);
}