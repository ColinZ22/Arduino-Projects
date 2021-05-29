#define joyLX A0
#define joyLY A1
#define joyRX A2
#define joyRY A3
int LX;
int LY;
int RX;
int RY;
void setup() {
  Serial.begin(9600);
}
void loop() {
LX=map(analogRead(joyLX),0, 1023, 0, 90);
  RX=map(analogRead(joyRX),0, 1023, 0, 180);
  LY=map(analogRead(joyLY),0, 1023, 0, 180);
  RY=map(analogRead(joyRY),0, 1023, 0, 160);
  

Serial.println(LX);
  Serial.print(" ");
  Serial.println(LY);
  Serial.print("\t");
  
  Serial.println(RX);
  Serial.print(" ");
    Serial.print("\t");
  Serial.println(RY);
  delay(25);
}
