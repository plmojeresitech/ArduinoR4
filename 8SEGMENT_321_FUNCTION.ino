int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6;
int pinF = 7;
int pinG = 8;
int pinDP = 12;


void setup() {
pinMode (pinA,OUTPUT);
pinMode (pinB,OUTPUT);
pinMode (pinC,OUTPUT);
pinMode (pinD,OUTPUT);
pinMode (pinE,OUTPUT);
pinMode (pinF,OUTPUT);
pinMode (pinG,OUTPUT);
pinMode (pinDP,OUTPUT);
}

void loop() {
  three();
  two();
  one();
  zero();

}

void three() {
digitalWrite (pinA, LOW);
digitalWrite (pinB, LOW);
digitalWrite (pinC, LOW);
digitalWrite (pinD, LOW);
digitalWrite (pinE, HIGH);
digitalWrite (pinF, HIGH);
digitalWrite (pinG, LOW);
digitalWrite (pinDP, LOW);
delay(1000);
}


void two() {
digitalWrite (pinA, LOW);
digitalWrite (pinB, LOW);
digitalWrite (pinC, HIGH);
digitalWrite (pinD, LOW);
digitalWrite (pinE, LOW);
digitalWrite (pinF, HIGH);
digitalWrite (pinG, LOW);
digitalWrite (pinDP, LOW);
delay(1000);
}


void zero() {
digitalWrite (pinA, LOW);
digitalWrite (pinB, LOW);
digitalWrite (pinC, LOW);
digitalWrite (pinD, LOW);
digitalWrite (pinE, LOW);
digitalWrite (pinF, LOW);
digitalWrite (pinG, HIGH);
digitalWrite (pinDP, LOW);
delay(1000);

}
void one() {
digitalWrite (pinA, HIGH);
digitalWrite (pinB, LOW);
digitalWrite (pinC, LOW);
digitalWrite (pinD, HIGH);
digitalWrite (pinE, HIGH);
digitalWrite (pinF, HIGH);
digitalWrite (pinG, HIGH);
digitalWrite (pinDP, LOW);
delay(1000);
}
