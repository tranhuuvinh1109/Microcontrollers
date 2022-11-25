// https://github.com/Arduino-IRremote/Arduino-IRremote
#include <IRremote.h>​

 // >v3.0.0
 #define PIN_RECV ​
int led_pin = 4; 
	
void setup() {​
	Serial.begin(9600);
	IrReceiver.begin(PIN_RECV);​

	pinMode(led_pin, OUTPUT);
}
void loop(){​
	if (IrReceiver.decode())
	{​
		digitalWrite(led_pin, HIGH); delay(2000);
		digitalWrite(led_pin, LOW);
		Serial.println("Received something...");
		IrReceiver.printIRResultShort(&Serial);
		Serial.println();
		IrReceiver.resume();​

	}
}