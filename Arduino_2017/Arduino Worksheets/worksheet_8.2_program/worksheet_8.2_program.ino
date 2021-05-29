void setup() {
Serial.begin(9600);
randomSeed(analogRead(0));
}

void loop() {
int bruh=random(20,51);
Serial.print("Your random number is:");
Serial.print("\t");
Serial.println(bruh);
delay(250);
}
