int a;
void setup() {
for (a=3; a<9; a++) {
pinMode(a, OUTPUT);}
}
void loop() {
analogWrite(3,250);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
analogWrite(6,250);
digitalWrite(8,HIGH);
digitalWrite(7,LOW);
delay(4000);
analogWrite(3,0);
analogWrite(6,0);
delay(1000);
analogWrite(3,250);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
analogWrite(6,250);
digitalWrite(8,LOW);
digitalWrite(7,HIGH);
delay(4000);
}
