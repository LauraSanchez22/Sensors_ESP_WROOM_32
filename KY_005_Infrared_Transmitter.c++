/**
 * Title: KY-005 Infrared Transmitter
 * Author: Laura Lizbeth Sanchez Ramirez
 * Comments:Used to receive data by infrared transmission.
 */


#define DECODE_NEC    
#elif defined(ESP32)
#define IR_RECEIVE_PIN          15  // D15
#define APPLICATION_PIN         16 // RX2 pin
#include <Arduino.h>
#include "PinDefinitionsAndMore.h"
#include <IRremote.h>

#endif

void setup() {
    Serial.begin(115200);
    //To use the remote library
    Serial.println(F("START " __FILE__ " from " __DATE__ "\r\nUsing library version " VERSION_IRREMOTE));


    /*
     *The receiver is initialized, the feedback LED is 
     enabled, and the LED Feedback pin is taken.
     */
    IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK, USE_DEFAULT_FEEDBACK_LED_PIN);


    Serial.print(F("Ready to receive IR signals at pin "));
    Serial.println(IR_RECEIVE_PIN);
}

void loop() {
    /*
     * The received data is checked to see if it is 
     available and, if so, is decoded.
     *The decoded result is found in the IrReceiver.decodedIRData 
     structure.
     */
    if (IrReceiver.decode()) {



        //For the data received
        IrReceiver.printIRResultShort(&Serial);
        if (IrReceiver.decodedIRData.protocol == UNKNOWN) {
            IrReceiver.printIRResultRawFormatted(&Serial, true);
        }

        IrReceiver.resume(); //Enables reception of the following value


    }
}
