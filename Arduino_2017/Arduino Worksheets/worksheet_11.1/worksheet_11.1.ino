void setup() {for(int a=1;a<13;a++){pinMode(a,OUTPUT);digitalWrite(a,HIGH);}}
void loop() {for(int b=12;b>0;b--){int c=b+1;digitalWrite(b,LOW);digitalWrite(c,HIGH);delay(75);}}
