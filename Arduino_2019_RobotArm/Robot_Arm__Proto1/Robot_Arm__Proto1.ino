#include <Servo.h>
Servo base;
Servo armone;
Servo armtwo;
Servo clip;
#define joyLX A0
#define joyLY A1
#define joyRX A2
#define joyRY A3
                  //joystick attach

int LX;  //joystick reading
int LY;  //joystick reading
int RX;  //joystick reading
int RY;  //joystick reading
void setup() {
  Serial.begin(9600);
  base.attach(8);
  armone.attach(9);
  armtwo.attach(10);
  clip.attach(11);
}
void loop() {
  LX=map(analogRead(joyLX),0, 1023, 0, 90);
  RX=map(analogRead(joyRX),0, 1023, 0, 150);
  LY=map(analogRead(joyLY),0, 1023, 0, 180);
  RY=map(analogRead(joyRY),0, 1023, 0, 160);

    base.write(LY);
    armone.write(150-RX);
    armtwo.write(90-LX);
    clip.write(RY);
    delay(10);

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
