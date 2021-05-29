int a;
int b;
int one(){
  digitalWrite(8,HIGH);
  digitalWrite(5,HIGH);
  delay(500);
  digitalWrite(8,LOW);
  digitalWrite(5,LOW);
  }
int two(){
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  delay(500);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  }
int three(){
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
    delay(500);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  }
int four(){
  digitalWrite(8,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(3,HIGH);
    delay(500);
  digitalWrite(8,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(3,LOW);
  }  
int five(){
   digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
    delay(500);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  }
int six(){
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
    delay(500);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  }
int seven(){
   digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(3,HIGH);
  delay(500);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  digitalWrite(3,LOW);
  }
int eight(){
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
    delay(500);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  }
int nine(){
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(6,HIGH);
    delay(500);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(6,LOW);
  }
int roll(){
  digitalWrite(2,HIGH);
  delay(600);
  digitalWrite(2,LOW);
  delay(600);
   digitalWrite(2,HIGH);
  delay(600);
  digitalWrite(2,LOW);
  }
void setup() {
for(a=2;a<10;a++){
pinMode(a,OUTPUT);
}
randomSeed(analogRead(0));
Serial.begin(9600);

}

void loop() {
b=random(1,9);
roll();
if(b==1){
  one();
  }
else if(b==2){
  two();
  }
else if(b==3){
  three();
  }
else if(b==4){
  four();
  }
else if(b==5){
  five();
  }
else if(b==6){
  six();
  }
else if(b==7){
  seven();
  }
else if(b==8){
  eight();
  }
else if(b==9){
  nine();
  }
  Serial.println(b);
}
