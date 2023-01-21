void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
pinMode(8, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13, HIGH);
Serial.println("RED LED IS ON");
delay(1000);
digitalWrite(13, LOW);
Serial.println("RED LED IS OFF");
delay(1000);
digitalWrite(8, HIGH);
Serial.println("BLUE LED IS ON");
delay(1000);
digitalWrite(8, LOW);
Serial.println("BLUE LED IS OFF");
delay(1000);
}
