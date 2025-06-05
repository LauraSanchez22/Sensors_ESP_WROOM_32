/**
 * Title: Led RGB 5mm KY-016
 * Author: Laura Lizbeth Sanchez Ramirez
 * Comments: Used to control the brightness intensity of the RGB LED.
 */

int rojo = 13;  // Pin 13 for red color
int azul = 12;  // Pin 12 for blue color
int verde = 14; // Pin 14 for green color
int pwm;        // To control brightness of colors
void setup()
{

    // Configuring colored pins as outputs
    pinMode(rojo, OUTPUT);
    pinMode(azul, OUTPUT);
    pinMode(verde, OUTPUT);
    // The program works at 9600 baud
    Serial.begin(9600);
}
void loop()
{
    // A range of values ​​from 255 to 0 is handled
    for (pwm = 255; pwm > 0; pwm--)
    {
        // Analog data for each color
        analogWrite(rojo, pwm);
        analogWrite(azul, 255 - pwm);
        analogWrite(verde, 128 - pwm);
        // Color values ​​are printed
        Serial.println(pwm, DEC);
        delay(5); // 5 millisecond delay
    }
    // A range of values ​​from 0 to 255 is handled
    for (pwm = 0; pwm < 255; pwm++)
    {
        // Analog data for each color
        analogWrite(rojo, pwm);
        analogWrite(azul, 255 - pwm);
        analogWrite(verde, 128 - pwm);

        // Color values ​​are printed
        Serial.println(pwm, DEC);
        delay(5); // 5 millisecond delay
    }
}
