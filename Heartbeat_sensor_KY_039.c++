/**
 * Title: Heartbeat sensor KY_039
 * Author: Laura Lizbeth Sanchez Ramirez
 * Comments: Used to measure the 20
 * approximate values ​​corresponding to the heart rate.
 */

void setup()
{
    // Setting pin 4 as input
    pinMode(4, INPUT);
    // The program will work at 9600 baud
    Serial.begin(9600);
}

void loop()
{
    // Value to measure approximate pulse beats
    float pulse;
    int sum = 0;

    // The average resulting from the last 20 data is received
    for (int i = 0; i < 20; i++){
        // Data collected from the analog signal
        sum += analogRead(4);
    }
    
    // The 20 data are taken into account
    pulse = sum / 20.00;

    // Data is printed on the serial monitor at 9600 baud
    Serial.println(pulse);
    delay(2000); // 2 second delay
}
