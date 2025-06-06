/**
 * Title: Rotary encoder KY-040
 * Author: Laura Lizbeth Sanchez Ramirez
 * Comments: It indicates the high state
 * of the encoder clockwise when the LED
 * on pin 2 is on when the rotary axis of
 * the KY-040 module is turning.
 */

int CLK = 2;
int DT = 4;
// It is used to read the last value of the encoder position
int direccion_anterior = 50;
// Global variable to measure positions
int POSICION = 50;

void setup()
{
    pinMode(CLK, INPUT);
    pinMode(DT, INPUT);

    // Serial channel is activated at 9600 baud
    Serial.begin(9600);

    // An interrupt is generated in LOW mode, 1 = clockwise and 0 = counterclockwise
    attachInterrupt(digitalPinToInterrupt(CLK), codificador, LOW);
    // This message is printed when the encoder is connected, but its shaft has not yet been rotated.
    Serial.println("Listo");
}

void loop()
{
    // When the previous position is different from the current one
    if (POSICION != direccion_anterior)
    {
        // Position value is printed
        Serial.println(POSICION);

        // Previous values ​​are updated previous_address = POSITION;
    }
}

void codificador()
{

    // 32-bit unsigned variable for interrupt generation
    static unsigned long interrupcion_generada = 0;

    // Returns the time between interrupts since the start of the program in milliseconds
    unsigned long tiempo_interrupcion = millis();

    /**The debounce effect is used; if an interrupt is
     * generated followed by another with a time difference
     * of 3 milliseconds, the second interruption produced is eliminated.
     **/
    if (tiempo_interrupcion - interrupcion_generada > 5)

    { /*This difference gives the time between interruptions.
      If the DT pin value is 1, the clockwise direction is being used.*/
        if (digitalRead(DT) == HIGH)
        {
            // The position is increased by 1
            POSICION++;
            // The DT pin is equal to 0
        }
        else
        {
            // It is decremented by 1
            POSICION--;
        }
        // The upper and lower limits of the encoder position are defined.
        POSICION = min(500, max(0, POSICION));

        // The generated value of the last interrupt is updated
        interrupcion_generada = tiempo_interrupcion;
    }
}
