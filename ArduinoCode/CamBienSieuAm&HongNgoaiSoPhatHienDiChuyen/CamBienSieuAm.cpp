const int trigPin = 5;
const int echoPin = 3;

void setup(){
	pinMode(trigPin, OUTPUT);
	pinMode(echoPin, INPUT);
	Serial.begin(9600);
}

void loop(){
	unsigned long duration;
	int distance;
	digitalWrite(trigPin, LOW);
	delayMicroseconds(2);
	digitalWrite(trigPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(trigPin, LOW);

	distance = duration * 0.034 / 2;
	Serial.print("Distance: ");
	Serial.print(distance);
	Serial.print("cm");
}