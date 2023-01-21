void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
// Number 9
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
//digitalWrite(5, LOW);
digitalWrite(7, LOW);
digitalWrite(8, LOW);
delay(1500);

// Number 8
digitalWrite(6, LOW);
digitalWrite(5, LOW);
delay(1500);

// Number 7
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
digitalWrite(7, HIGH);
digitalWrite(8, HIGH);
delay(1500);

// Number 6
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
digitalWrite(8, LOW);
digitalWrite(3, HIGH);
delay(1500);

// Number 5
digitalWrite(6, HIGH);
delay(1500);

// Number 4
digitalWrite(2, HIGH);
digitalWrite(5, HIGH);
digitalWrite(3, LOW);
delay(1500);

// Number 3
digitalWrite(7, HIGH);
digitalWrite(2, LOW);
digitalWrite(5, LOW);
delay(1500);

// Number 2
digitalWrite(6, LOW);
digitalWrite(4, HIGH);
delay(1500);

// Number 1
digitalWrite(2, HIGH);
digitalWrite(8, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
digitalWrite(4, LOW);
delay(1500);
}
