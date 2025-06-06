/**
 * Title: PIR and Buzzer KY-006
 * Author: Laura Lizbeth Sanchez Ramirez
 * Comments: Used to trigger an alarm sound using a PIR sensor.
 */

#define SENSOR_PIR 26 // Pin 26 of the board is used to connect the data pin of the PIR sensor
#define BUZZER_PIN 15 // Pin 15

int estadoActual = LOW;   // Current state of the sensor pin
int estadoAnterior = LOW; // Previous state of the sensor pin

void setup()
{
    Serial.begin(9600);          // Serial port at 9600 baud
    pinMode(SENSOR_PIR, INPUT);  // The PIR sensor is set as data input
    pinMode(BUZZER_PIN, OUTPUT); // The buzzer is set as data output
}

void loop()
{
    // The previous state is stored
    estadoAnterior = estadoActual;

    // Digital reading of the current status
    estadoActual = digitalRead(SENSOR_PIR);

    // If the PIR sensor detects movement
    if (estadoAnterior == LOW && estadoActual == HIGH)
    {
        Serial.println("Movimiento detectado!!!");
        digitalWrite(BUZZER_PIN, HIGH); // The buzzer alarm turns on
        delay(1000);                    // The waiting time is 1 second
    }
    // If the current state of the sensor detects that there is no movement, the alarm is turned off.
    else if (estadoAnterior == HIGH && estadoActual == LOW)
    {
        Serial.println("No hay movimiento!!!");
        digitalWrite(BUZZER_PIN, LOW); // The buzzer alarm goes off
        delay(1000);                   // The waiting time is 1 second
    }

    // If there is no movement the alarm turns off
    else if (estadoAnterior == HIGH && estadoActual == LOW)
    {
        Serial.println("No hay movimiento!!!");
        digitalWrite(BUZZER_PIN, LOW); // The buzzer alarm goes off
        delay(1000);                   // The waiting time is 1 second
    }
}
