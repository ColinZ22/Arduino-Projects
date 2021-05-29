int b;
int c;
void setup() {
for(int a=2;a<13;a++){pinMode(a,OUTPUT);
digitalWrite(a,HIGH);}
pinMode(14,OUTPUT);
pinMode(15,OUTPUT);
}
void loop() {
while(digitalRead(14)==HIGH){
for(b=12;b>1;b--){
digitalWrite(b,LOW);
delay(75);
digitalWrite(b,HIGH);
if(b==2){tone(15,262,50);
}
}
}
while(digitalRead(14)==LOW){
for(c=2;c<13;c++){
digitalWrite(c,LOW);
delay(75);
digitalWrite(c,HIGH);
if(c==12){tone(15,262,50);
}
}
}
}
