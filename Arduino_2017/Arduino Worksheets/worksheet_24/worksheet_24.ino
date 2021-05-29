int a;
int IR;
int in(){
analogWrite(3,0);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
analogWrite(6,255);
digitalWrite(8,HIGH);
digitalWrite(7,LOW);
delay(1);}
int out(){
analogWrite(3,255);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
analogWrite(6,0);
digitalWrite(8,HIGH);
digitalWrite(7,LOW);
delay(1);}
int check(){
  IR=digitalRead(12);
  Serial.println(IR);}
int Stop(){
analogWrite(3,0);
analogWrite(6,0);
}
void setup() {
for (a=3; a<9; a++) {
pinMode(a, OUTPUT);}
pinMode(12,INPUT);
Serial.begin(9600);

}

void loop() {
check();
if(IR==1){out();}
if(IR==0){in();}

}
