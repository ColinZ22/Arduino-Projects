int Time;
int distance;
int fun(){
  digitalWrite(A0,LOW);
delayMicroseconds(2);
digitalWrite(A0,HIGH);
delayMicroseconds(10);
digitalWrite(A0,LOW);
Time=pulseIn(A1,HIGH);
distance=Time/148;
return distance;
}
void setup() {
pinMode(A0,OUTPUT);
pinMode(A1,INPUT);
Serial.begin(9600);
}
void loop() {
fun();
Serial.print(distance);
Serial.println(" inches");
}
