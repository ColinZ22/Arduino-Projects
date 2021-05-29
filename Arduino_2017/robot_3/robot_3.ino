int a;
void setup() {
for (a=3; a<9; a++) {
pinMode(a, OUTPUT);}
}

void loop() {
analogWrite(3,255);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
analogWrite(6,255);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);
delay(20);
analogWrite(3,250);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
analogWrite(6,80);
digitalWrite(8,HIGH);
digitalWrite(7,LOW);
delay(3000);
analogWrite(3,0);
analogWrite(6,0);
delay(500);
analogWrite(3,255);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
analogWrite(6,255);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);
delay(50);
analogWrite(3,60);
digitalWrite(5,HIGH);
digitalWrite(4,LOW);
analogWrite(6,250);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);
delay(3000);
analogWrite(3,0);
analogWrite(6,0);
delay(500);
}
