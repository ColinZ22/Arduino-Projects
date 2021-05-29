void setup() {
Serial.begin(9600);
}

void loop() {
for(int a=100;a>0;a--){
Serial.print("Counting backwards from 100:");
Serial.print("\t");
Serial.println(a);
delay(100);
}
}
