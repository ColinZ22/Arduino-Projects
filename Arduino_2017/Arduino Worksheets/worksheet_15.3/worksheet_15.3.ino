int a;
int low;
int high;
int b;
void setup() {
pinMode(A0,INPUT);
pinMode(5,OUTPUT);
low=analogRead(A0);
high=analogRead(A0);
}
void loop() {
b=analogRead(A0);
if(b<low){low=b;}
else if(b>high){high=b;}
a=map(analogRead(A0),low,high,100,1000);
tone(5,a);
}
