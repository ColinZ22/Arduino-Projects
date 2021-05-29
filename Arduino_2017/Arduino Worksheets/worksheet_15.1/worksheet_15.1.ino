int a;
int b;
int c;
int d;
void setup() {
for(a=2;a<13;a++){pinMode(a,OUTPUT);
Serial.begin(9600);
pinMode(A0,OUTPUT);
}
}
void loop() {
b=map(analogRead(A0),3,25,1,12);
Serial.println(b);
delay(200);
for(d=b;d<=13;d++){digitalWrite(d,HIGH);}
for(c=b-1;c>1;c--){digitalWrite(c,LOW);
}
}
