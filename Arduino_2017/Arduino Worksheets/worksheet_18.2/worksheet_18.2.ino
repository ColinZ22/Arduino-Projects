int Time;
int notes[]={220,233,247,262,277,294,311,330,349,370,392,415,440,466,494,523,554,587,0};
int distance;
int play(){ 
digitalWrite(A0,LOW);
delayMicroseconds(2);
digitalWrite(A0,HIGH);
delayMicroseconds(10);
digitalWrite(A0,LOW);
Time=pulseIn(A1,HIGH);
distance=map(Time,190,2500,0,17);
if(distance<0){distance=18;
}
if(distance>17){distance=18;
}
}
void setup() {
pinMode(A0,OUTPUT);
pinMode(A1,INPUT);
pinMode(3,OUTPUT);
Serial.begin(9600);
}

void loop() {
play();
tone(3,notes[distance],200);
Serial.println(distance);
}
