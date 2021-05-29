int a;
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
void setup() {
for(a=2;a<10;a++){
pinMode(a,OUTPUT);
}
}

void loop() {
one();
two();
three();
four();
five();
six();
seven();
eight();
nine();
}
