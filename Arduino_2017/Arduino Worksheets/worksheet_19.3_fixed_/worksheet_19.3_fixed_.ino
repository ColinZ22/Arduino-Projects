int a;int b;
int fun(int f){if(f==0){digitalWrite(3,HIGH);digitalWrite(4,HIGH);digitalWrite(5,HIGH);digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);delay(500);digitalWrite(3,LOW);digitalWrite(4,LOW);digitalWrite(5,LOW);digitalWrite(6,LOW);digitalWrite(7,LOW);digitalWrite(8,LOW);}
else if(f==0){digitalWrite(3,HIGH);digitalWrite(4,HIGH);digitalWrite(5,HIGH);digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);;delay(500); digitalWrite(3,LOW);digitalWrite(4,LOW);digitalWrite(5,LOW);digitalWrite(6,LOW);digitalWrite(7,LOW);digitalWrite(8,LOW);}
else if(f==1){digitalWrite(8,HIGH);digitalWrite(5,HIGH);delay(500);digitalWrite(8,LOW);digitalWrite(5,LOW);}
else if(f==2){digitalWrite(7,HIGH);digitalWrite(6,HIGH);digitalWrite(9,HIGH);digitalWrite(5,HIGH);digitalWrite(4,HIGH);delay(500);digitalWrite(7,LOW);digitalWrite(6,LOW);digitalWrite(9,LOW);digitalWrite(5,LOW);digitalWrite(4,LOW);}
else if(f==3){digitalWrite(7,HIGH);digitalWrite(6,HIGH);digitalWrite(9,HIGH);digitalWrite(3,HIGH);digitalWrite(4,HIGH);delay(500);digitalWrite(7,LOW);digitalWrite(6,LOW);digitalWrite(9,LOW);digitalWrite(3,LOW);digitalWrite(4,LOW);}
else if(f==4){digitalWrite(8,HIGH);digitalWrite(6,HIGH);digitalWrite(9,HIGH);digitalWrite(3,HIGH);delay(500);digitalWrite(8,LOW);digitalWrite(6,LOW);digitalWrite(9,LOW);digitalWrite(3,LOW);}
else if(f==5){digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(3,HIGH);digitalWrite(4,HIGH);delay(500);digitalWrite(7,LOW);digitalWrite(8,LOW);digitalWrite(9,LOW);digitalWrite(3,LOW);digitalWrite(4,LOW);}
else if(f==6){digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(3,HIGH);digitalWrite(4,HIGH);digitalWrite(5,HIGH);delay(500);digitalWrite(7,LOW);digitalWrite(8,LOW);digitalWrite(9,LOW);digitalWrite(3,LOW);digitalWrite(4,LOW);digitalWrite(5,LOW);}
else if(f==7){digitalWrite(7,HIGH);digitalWrite(6,HIGH);digitalWrite(3,HIGH);delay(500);digitalWrite(7,LOW);digitalWrite(6,LOW);digitalWrite(3,LOW);}
else if(f==8){digitalWrite(3,HIGH);digitalWrite(4,HIGH);digitalWrite(5,HIGH);digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);delay(500); digitalWrite(3,LOW);digitalWrite(4,LOW);digitalWrite(5,LOW);digitalWrite(6,LOW);digitalWrite(7,LOW);digitalWrite(8,LOW);digitalWrite(9,LOW);}
else if(f==9){digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);digitalWrite(3,HIGH);digitalWrite(4,HIGH);digitalWrite(6,HIGH);delay(500);digitalWrite(7,LOW);digitalWrite(8,LOW);digitalWrite(9,LOW);digitalWrite(3,LOW);digitalWrite(4,LOW);digitalWrite(6,LOW);}
else if(f==10){digitalWrite(3,HIGH);delay(100);digitalWrite(3,LOW);delay(100);digitalWrite(4,HIGH);delay(100);digitalWrite(4,LOW);delay(100);digitalWrite(5,HIGH);delay(100);digitalWrite(5,LOW);delay(100);digitalWrite(6,HIGH);delay(100);digitalWrite(6,LOW);delay(100);digitalWrite(7,HIGH);delay(100);digitalWrite(7,LOW);delay(100);digitalWrite(8,HIGH);delay(100);digitalWrite(8,LOW);}}
void setup() {for(a=2;a<10;a++){pinMode(a,OUTPUT);}pinMode(11,OUTPUT);randomSeed(analogRead(0));}
void loop() {
  while(digitalRead(11)==HIGH){b=random(0,9);fun(b);delay(200);}
  while(digitalRead(11)==LOW){fun(10);}}
