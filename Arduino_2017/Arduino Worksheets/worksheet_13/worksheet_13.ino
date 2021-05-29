#include "pitches.h"
int theme[] = {
  NOTE_FS4, NOTE_A4, NOTE_CS5, NOTE_A4, NOTE_FS4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_CS4, NOTE_D4, NOTE_FS4, NOTE_A4, NOTE_CS5, NOTE_A4, NOTE_FS4, NOTE_F5, NOTE_E5, NOTE_D5, NOTE_GS4, NOTE_CS5, NOTE_FS4, NOTE_CS5, NOTE_GS4, NOTE_CS5, NOTE_G4, NOTE_FS4, NOTE_E4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_DS4, NOTE_D4
};
int thisnote;
int noteDurations[] = {
   500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500
};

void setup() {
pinMode(6,OUTPUT);
pinMode(5,OUTPUT);
}
void loop() {
while (digitalRead(6)==HIGH){
for (thisnote = 0; thisnote < 40; thisnote++) {
tone(5, theme[thisnote]);
if (digitalRead(6)==LOW)
{goto start;}
  
delay(noteDurations[thisnote]);
}
}
start:
while (digitalRead(6)==LOW){
noTone(5);


}
}
