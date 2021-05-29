int a;
int fun(int f){
if(f==0){digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
    delay(500);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  }
else if(f==1){digitalWrite(8,HIGH);
  digitalWrite(5,HIGH);
  delay(500);
  digitalWrite(8,LOW);
  digitalWrite(5,LOW);
  }
else if(f==2){digitalWrite(7,HIGH);
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
else if(f==3){digitalWrite(7,HIGH);
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
else if(f==4){ digitalWrite(8,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(3,HIGH);
    delay(500);
  digitalWrite(8,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(3,LOW);
  }
else if(f==5){ digitalWrite(7,HIGH);
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
else if(f==6){ digitalWrite(7,HIGH);
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
else if(f==7){  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(3,HIGH);
  delay(500);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  digitalWrite(3,LOW);
  }
else if(f==8){ digitalWrite(3,HIGH);
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
else if(f==9){digitalWrite(7,HIGH);
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
}

void setup() {
for(a=2;a<10;a++){
pinMode(a,OUTPUT);
}
}

void loop() {
fun(0);
fun(1);
fun(2);
fun(3);
fun(4);
fun(5);
fun(6);
fun(7);
fun(8);
fun(9);
}
