#include <IRremote.h>​

#define first_key 41565 // 1 ​
#define second_key 25245 //2 ​
#define third_key 57885 //3 ​
#define fourth_key 8925 //4 ​
#define fifth_key 765 //5 ​
#define sixth_key 49725 //6 ​
#define seventh_key 57375 //7 ​
#define eigth_key 43095 //8 ​
#define nine_key 36975 //9 ​
#define oh_key 39015 //0 ​
#define star_key 26775 //11 ​
#define thang_key 45135 //12 ​
#define up_key 6375 //13 ​
#define left_key 4335 //14 ​
#define right_key 23205 //15 ​
#define down_key 19125 //16 ​
#define ok_key 14535 //17
// #define second_key 58359 ​

// #define third_key 539​

// #define fourth_key 25979 ​

int receiver_pin = 10; 
​
int first_led_pin = 7; ​
int second_led_pin = 2; ​
int third_led_pin = 4;​

 // int fourth_led_pin = 4; ​

IRrecv receiver(receiver_pin);​

decode_results output;​

void setup() {
	Serial.begin(9600);​
	receiver.enableIRIn(); ​

	pinMode(first_led_pin, OUTPUT);​
	pinMode(second_led_pin, OUTPUT);​
	pinMode(third_led_pin, OUTPUT);
}

void loop() {​

 if (receiver.decode(&output)) { ​

		unsigned int value = output.value; ​

		switch(value)
		{​

			case first_key: { digitalWrite(first_led_pin, HIGH); Serial.println(1); break; }​
			case second_key: { digitalWrite(first_led_pin, LOW); Serial.println(2); break; } ​
			case third_key: { digitalWrite(second_led_pin, HIGH); Serial.println(3); break; } ​
			case fourth_key: { digitalWrite(second_led_pin, LOW); Serial.println(4); break; }​
			case fifth_key: { digitalWrite(third_led_pin, HIGH); Serial.println(5); break; } ​
			case sixth_key: { digitalWrite(third_led_pin, LOW); Serial.println(6); break; }
			case seventh_key: { Serial.println(7); break; } ​
			case eigth_key: { Serial.println(8); break; }​
			case nine_key: { Serial.println(9); break; }​
			case oh_key: { Serial.println(0); break; } ​
			case star_key: { Serial.println("*"); break; } ​
			case thang_key: { Serial.println("#"); break; }​
			case up_key: { Serial.println("UP"); break; }​
			case left_key: { Serial.println("LEFT"); break; }​
			case right_key: { Serial.println("RIGHT"); break; } ​
			case down_key: { Serial.println("DOWN"); break; } ​
			case ok_key: { Serial.println("OK"); break; } ​
			default: {}
		}​
	​		receiver.resume(); 
	}
}​