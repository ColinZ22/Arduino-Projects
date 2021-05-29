void setup() {
Serial.begin(9600);
}

void loop() {
int bruh=random(100);
Serial.print("Your random number is:");
Serial.print("\t");
Serial.println(bruh);
delay(250);
}
