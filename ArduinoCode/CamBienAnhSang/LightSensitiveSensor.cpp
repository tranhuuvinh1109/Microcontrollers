int LED = 13; //define led degital pin 13
int LIGHT = 0; //define light analg pin 0
int val = 0; // define the voltage value

void setup() {
	pinMode(LED, OUTPUT);
	Serial.begin(9600);
}

void loop() {
	val = analogRead(LIGHT);
	Serial.println(val);
	if(val < 700) {
		digitalWrite(LIGHT, LOW);
	}
	else {
		digitalWrite(LIGHT, HIGH);
	}

	delay(10);
}