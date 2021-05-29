int a;
int b;
int c;
int d;
void setup() {
for(a=2;a<13;a++){pinMode(a,OUTPUT);
pinMode(A0,OUTPUT);
}
}
void loop() {
b=map(analogRead(A0),5,26,1,12);
for(d=b;d<=13;d++){digitalWrite(d,HIGH);}
for(c=b-1;c>1;c--){digitalWrite(c,LOW);}
}
