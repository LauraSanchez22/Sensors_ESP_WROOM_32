/**
 * Title: LM35 Sensor 
 * Author: Laura Lizbeth Sanchez Ramirez
 * Comments: Code used to obtain outside temperature 
 * values ​​measured in degrees Celsius.
 */


 //Measurements made in millivolts
#define ADC_VREF_mV         3300.0
#define ADC_RESOLUTION      4096.0
#define PIN_LM35            35

void setup(){
    //The serial channel is activated at 9600 baud
    Serial.begin(9600);

}

void loop(){
    //Reading analog values
    int adcVal = analogRead(PIN_LM35);
    //Conversion of ADC measurement to millivolts
    float millivolt = adcVal * (ADC_VREF_mV / ADC_RESOLUTION);
    //Voltage is converted to temperature values
    float temperature = millivolt / 10;

    //Printing temperature values ​​in degrees Celsius
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.print("°C");
}