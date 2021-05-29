void setup() {
Serial.begin(9600);
randomSeed(analogRead(0));

}

void loop() {
int bruh=random(1,101);
Serial.print("Your random number is:");
Serial.print("\t");
Serial.println(bruh);
delay(250);
}
