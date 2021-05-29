void setup() {
Serial.begin(9600);
}

void loop() {
for(int a=1000;a>=0;a-=10){
Serial.print("Counting backwards by 10's:");
Serial.print("\t");
Serial.println(a);
delay(100);
}
}
