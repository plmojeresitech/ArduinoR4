int ledPin = 13;
int sensorPin = 2;
int sensorState = LOW;
int sensorValue = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
}

void loop(){
  sensorValue = digitalRead(sensorPin);
  if (sensorValue == HIGH) {
    digitalWrite(ledPin, HIGH);
    delay(100);
    
    if (sensorState == LOW) {
      Serial.println("Motion detected!");
      sensorState = HIGH;
    }
  } 
  else {
      digitalWrite(ledPin, LOW);
      delay(200);
      
      if (sensorState == HIGH){
        Serial.println("Motion stopped!");
        sensorState = LOW;
    }
  }
}