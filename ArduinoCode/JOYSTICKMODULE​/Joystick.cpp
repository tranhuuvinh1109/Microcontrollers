const int vx = A1;
const int vy = A2;
const int sw = 9;

void setup(){
	pinMode(vx, INPUT);
	pinMode(vy, INPUT);
	pinMode(sw, INPUT_PULLUP); // neu la input thi phai mac them tro
	Serial.begin(9600);
}

void loop(){
	int x = analogRead(vx);
	int y = analogRead(vy);
	int s = digitalRead(sw);//HiGH neu khong bam, LOW neu bam

	Serial.print("X = ");
	Serial.println(x);
	Serial.print("Y = ");
	Serial.println(y);
	Serial.print("S = ");
	Serial.println(s);
	delay(500);
}
