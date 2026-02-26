int trigPin = 9;
int echoPin = 10;
int LED_R = 11;
int LED_G = 13;

// defines variables
long duration;
int distance;
int safetyDistance;

void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
pinMode(LED_R, OUTPUT);
pinMode(LED_G, OUTPUT);
Serial.begin(9600); // Starts the serial communication
}

void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);

// Calculating the distance
distance= duration*0.034/2;

safetyDistance = distance;
if (safetyDistance <= 15){       //safe distance 15 cm 
  digitalWrite(LED_G, HIGH);
  digitalWrite(LED_R, LOW);
}
else{
  digitalWrite(LED_G, LOW);
  digitalWrite(LED_R, HIGH);
}

// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
}

