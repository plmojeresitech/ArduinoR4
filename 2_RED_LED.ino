int redLED = 3; 

void setup() {
	pinMode (redLED, OUTPUT); 
}
void loop() {
	// dot
	digitalWrite (redLED, HIGH);
	delay(150);
	digitalWrite (redLED, LOW);
	delay(150);

	//dot
	digitalWrite (redLED, HIGH);
	delay(150);
	digitalWrite (redLED, LOW);
	delay(150);
	
	//dot
	digitalWrite (redLED, HIGH);
	delay(150);
	digitalWrite (redLED, LOW);
	delay(150);
	
	//dash
	digitalWrite (redLED, HIGH);
	delay(500);
	digitalWrite (redLED, LOW);
	delay(500);

	//dash
	digitalWrite (redLED, HIGH);
	delay(500);
	digitalWrite (redLED, LOW);
	delay(500);

	//dash
	digitalWrite (redLED, HIGH);
	delay(500);
	digitalWrite (redLED, LOW);
	delay(500);
	
	//Adding a Gap before restarting
	delay(1000);
	}
