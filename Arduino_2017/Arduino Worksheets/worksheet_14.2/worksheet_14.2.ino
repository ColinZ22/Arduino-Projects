int A;
void setup() {
Serial.begin(9600);
}

void loop() {
A=map(analogRead(A1),0, 1023, 0, 100); 
Serial.println(A);
delay(100);
}
