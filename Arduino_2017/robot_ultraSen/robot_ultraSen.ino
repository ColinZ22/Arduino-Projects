int a;
int Time;
int dist(){
digitalWrite(A1,LOW);
delayMicroseconds(2);
digitalWrite(A1,HIGH);
delayMicroseconds(10);
digitalWrite(A1,LOW);
Time=pulseIn(A2,HIGH);
}
int fwd(){
analogWrite(3,255);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
analogWrite(6,255);
digitalWrite(8,HIGH);
digitalWrite(7,LOW);
delay(1);
}
int turn(){
analogWrite(3,255);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
analogWrite(6,250);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);
delay(670);
}
int Stop(){
analogWrite(3,0);
analogWrite(6,0);
}
void setup() {
for (a=3; a<9; a++) {
pinMode(a, OUTPUT);}
pinMode(A1, OUTPUT);
pinMode(A2, INPUT);
Serial.begin(9600);
}
void loop() {
start:
dist();
if(Time<0){Stop();goto start;}
if(Time<601){turn();}
fwd();
}
