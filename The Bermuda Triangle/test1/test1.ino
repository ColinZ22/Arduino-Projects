#include <Servo.h>

Servo myservo; 

int pos = 90; 

const int VRx = A0;
const int VRy = A1;
const int SW = 12;

int xPos;
int yPos;
int SW_state;
int mappedX; 
int mappedY;

void setup() {

Serial.begin(9600);

myservo.attach(9);

pinMode(SW, INPUT_PULLUP); 

}

void loop() {

xPos = analogRead(VRx);
yPos = analogRead(VRy);
SW_state = analogRead(SW);

mappedX = map(xPos, 0, 1023, 0, 180);
mappedY = map(yPos, 0, 1023, 0, 180);

Serial.print("X: ");
Serial.println(mappedX);
Serial.print("Y: ");
Serial.println(mappedY);
//Serial.print("SW_Button: ");
//Serial.println(SW_state);

if (mappedY == 0 && mappedX != 91)
{
  myservo.write(180 - mappedX);
}

delay(20);
}
