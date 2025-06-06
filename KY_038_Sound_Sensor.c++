/**
 * Title: KY-038 Sound Sensor
 * Author: Laura Lizbeth Sanchez Ramirez
 * Comments: It is used to turn on the sensor 
 * LED every time there is a sound.
 */

// The pins to be used are assigned
int led = 26;
int sound_digital = 2; // Digital connection to pin 2 of the ESP WROOM 32
int sound_analog = 4;  // Analog connection to the sensor
void setup()
{
    Serial.begin(9600);            // Results displayed on serial channel at 9600 baud
    pinMode(led, OUTPUT);          // Configuration as external LED output
    pinMode(sound_digital, INPUT); // Digital connection configured as input
}

void loop()
{ 
    // The digital values ​​are read
    int val_digital = digitalRead(sound_digital);
    // The reading of the analog values ​​is performed
    int val_analog = analogRead(sound_analog);
    // The value is printed on the serial channel at 9600 baud, the current result
    Serial.print(val_analog);
    Serial.print("\t");
    Serial.println(val_digital);

    // If the sensor detects sound around it, the LED lights up.
    if (val_digital == HIGH)
    {
        digitalWrite(led, HIGH);
        delay(3000);
    }
    else
    {
        // If you hear sound again, the LED turns off.
        digitalWrite(led, LOW);
    }
}