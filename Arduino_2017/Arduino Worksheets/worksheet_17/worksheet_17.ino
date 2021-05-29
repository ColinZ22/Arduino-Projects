void setup() {
pinMode(A0,OUTPUT);
pinMode(A1,INPUT);
Serial.begin(9600);
}

void loop() {
digitalWrite(A0,LOW);
delayMicroseconds(2);
digitalWrite(A0,HIGH);
delayMicroseconds(10);
digitalWrite(A0,LOW);
int Time=pulseIn(A1,HIGH);
int distance=Time/148;
Serial.print(distance);
Serial.println(" inches");
}analogWrite(3,200);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
analogWrite(6,200);
digitalWrite(8,HIGH);
digitalWrite(7,LOW);
delay(500);
analogWrite(3,250);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
analogWrite(6,250);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);
delay(678);
