void setup() {
randomSeed(analogRead(0));
Serial.begin(9600);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
digitalWrite(2,HIGH);
digitalWrite(3,HIGH); 
digitalWrite(4,HIGH); 
digitalWrite(5,HIGH); 
digitalWrite(6,HIGH); 
digitalWrite(7,HIGH); 
digitalWrite(8,HIGH); 
digitalWrite(9,HIGH); 
digitalWrite(10,HIGH); 
digitalWrite(11,HIGH); 
digitalWrite(12,HIGH);  
}

void loop() {
int br=random(2,13);
int uh=random(2,13);
delay(300);
while(br==uh){
br=random(2,13);
}
digitalWrite(br,LOW);
digitalWrite(uh,LOW);
delay(300);
digitalWrite(br,HIGH);
digitalWrite(uh,HIGH);
delay(300);
}
