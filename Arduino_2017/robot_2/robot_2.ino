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
digitalWrite(8,HIGH);
digitalWrite(7,LOW);
delay(20);
analogWrite(3,240);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
analogWrite(6,80);
digitalWrite(8,HIGH);
digitalWrite(7,LOW);
delay(4200);
analogWrite(3,60);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
analogWrite(6,255);
digitalWrite(8,HIGH);
digitalWrite(7,LOW);
delay(8100);
analogWrite(3,240);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
analogWrite(6,80);
digitalWrite(8,HIGH);
digitalWrite(7,LOW);
delay(4200);
analogWrite(3,255);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
analogWrite(6,255);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);
delay(2500);
analogWrite(3,255);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
analogWrite(6,255);
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
delay(2500);
}
