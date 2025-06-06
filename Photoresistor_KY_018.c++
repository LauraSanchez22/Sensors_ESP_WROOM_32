/**
 * Title: Photoresistor KY-018
 * Author: Laura Lizbeth Sanchez Ramirez
 * Comments: It perceives the brightness
 * level in the environment through measurements
 * made by the photoresistor.
 */

int led = 4;
int fotoresistor = 12;

void setup()
{
    // The photoresistor signal pin is configured as input
    pinMode(fotoresistor, INPUT);
    // Writing analog values ​​by the sensor
    analogWrite(fotoresistor, LOW);
    // Used to indicate the brightness values ​​of the environment
    pinMode(led, OUTPUT);
    // Serial channel is activated at 9600 baud
    Serial.begin(9600);
}
void loop()
{
    // Reading analog values
    int light = analogRead(led);
    Serial.print("Light = ");
    // The brightness value perceived by the user is printed on the screen.
    Serial.println(light);
    // 1 second delay between each measurement
    delay(1000);
}