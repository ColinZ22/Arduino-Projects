int b;
int c;
int d;
void setup() {
for(int a=2;a<13;a++){pinMode(a,OUTPUT);
digitalWrite(a,HIGH);}
pinMode(14,OUTPUT);
pinMode(15,OUTPUT);
d=262;
}
void loop() {
while(digitalRead(14)==HIGH){
for(b=12;b>1;b--){
digitalWrite(b,LOW);
delay(75);
digitalWrite(b,HIGH);
if(b==2){tone(15,d,50);
d+=200;
if(d>=5000){d=262;
}
}
}
}
while(digitalRead(14)==LOW){
for(c=2;c<13;c++){
digitalWrite(c,LOW);
delay(75);
digitalWrite(c,HIGH);
if(c==12){tone(15,d,50);
d+=200;
if(d>=5000){d=262;
}
}
}
}
}
