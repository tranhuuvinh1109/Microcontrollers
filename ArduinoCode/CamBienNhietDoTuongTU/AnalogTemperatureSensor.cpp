int ALARM = 4;
float tmprVal = 0;
float sinVal;
int toneVal;

void setup(){
	Serial.begin(9600);
}

void loop() {
	int sensorValue = analogRead(A0);

	// Convert the analog reading (which goes from 0 - 1023) to a voltage ( 0 -5V ):
	float voltage =  sensorValue * ( 5.0 / 1023.0 );
	float tmprVal = voltage * 100;

	if(tmprVal > 40) {
		for( int x = 0; x < 180; x++){
			sinVal = (sin(x * (3.1412 / 180)));
			toneVal = 2000 + (int(sinVal * 1000));
			tone(ALARM, toneVal);
			delay(2);
		}
	}
	else {
		noTone(ALARM);
	}

	Serial.println("Temperature: ");
	Serial.print(tmprVal);
	delay(500);
}