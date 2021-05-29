void setup() {
Serial.begin(9600);
}

void loop() {
for(int a=1;a<101;a++){
Serial.print("Counting to 100:");
Serial.print("\t");
Serial.println(a);
delay(100);
}
}
