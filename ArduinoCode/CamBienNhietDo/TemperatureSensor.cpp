#include <DallasTemperature.h>
#include <OneWire.h>

#define ONE_WIRE_BUS 3

OneWire oneWire(ONE_WIRE_BUS);

DallasTemperature DS18B20(&oneWire);
int ALARM = 4;
float tempC;
float tmprVal = 0;
float sinVal = 0;
int toneVal;

void setup(){
	Serial.begin(9600);
}

void loop(){
	getTemperature();
	Serial.print("Temperature: ");
	Serial.print(tempC);
	Serial.print(" C");
	delay(500);
	if(tempC > 27){
		for(int x = 0; x < 180; x++){
			sinVal = (sin(x * (3.1412 / 180)));
			toneVal = 2000 + (int(sinVal * 1000));
			tone(ALARM, toneVal);
			delay(2);
		}
	}
	else {
		noTone(ALARM);
	}
}

void getTemperature(){
	do {
		// yêu cầu nhiệt độ mới 
		DS18B20.requestTemperatures();
		//lấy nhiệt độ theo chỉ mục
		tempC = DS18B20.getTempCByIndex(0);
		if(tempC == (-127)){
			delay(100);
		}
	}
	while (tempC == (-127.0));
	
}