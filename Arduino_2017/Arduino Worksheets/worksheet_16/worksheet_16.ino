int a;
void setup() {
pinMode(A0,INPUT);
pinMode(3,OUTPUT);//has to be one of the following pins(3,5,6,9,10,11)
Serial.begin(9600);
}

void loop() {
a=map(analogRead(A0),0,1023,0,255);
analogWrite(3,a);//has to be one of the following pins(3,5,6,9,10,11)
Serial.println(a);
delay(100);
}
