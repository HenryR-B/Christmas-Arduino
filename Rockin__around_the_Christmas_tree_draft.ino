const int G3 = 196;
const int Ab3 = 208;
const int Bb3 = 233;
const int C4 = 262;
const int Db4 = 277;
const int Eb4 = 311;
const int E4 = 330;
const int F4 = 349;
const int G4 = 392;
const int Ab4 = 415;
const int Bb4 = 466;
const int R = 0;

int buzzerPin = 14;
int numNotes = 244;
int endingNumNotes1 = 12;
int endingNumNotes2 = 19;
int repeatedMelody[] = {
  Eb4, R, Eb4, R, Eb4, R, F4, R, F4, R,
  Eb4, R, Eb4, R, F4, F4, R, Eb4, R, Eb4, R,
  G4, R, F4, R, Db4, R, Bb3, R, G3, G3, R, R,

  F4, R, F4, R, F4, R, G4, R, G4, R,
  F4, R, F4, R, G4, G4, R, F4, R, F4, R,
  Eb4, R, E4, R, F4, R, Db4, R, C4, R, R,

  Eb4, R, Eb4, R, Eb4, R, F4, R, F4, R,         
  Eb4, R, Eb4, R, F4, F4, R, Eb4, R, Eb4, R, 
  G4, R, F4, R, Db4, R, Bb3, R, G3, G3, R, R,

  F4, R, F4, R, F4, R, G4, R, G4, R,
  F4, R, F4, R, G4, G4, R, F4, R, F4, R,
  Eb4, R, E4, R, F4, R, G3, R, Ab3, R, R,       

  F4, R, E4, R, F4, R, E4, R,
  F4, R, Ab3, R, Db4, R, F4, R,
  G4, R, Eb4, R, C4, R, Eb4, R, G4, R, R,

  Ab4, R, G4, R, Ab4, R, G4, R,
  Ab4, R, F4, R, G4, R, Ab4, R,
  Bb4, R, R, Ab4, R, G4, R, F4, R,
  Eb4, R, F4, R, G4, R, Eb4, R,

  Eb4, R, Eb4, R, Eb4, R, F4, R, F4, R,         
  Eb4, R, Eb4, R, F4, F4, R, Eb4, R, Eb4, R,
  G4, R, F4, R, Db4, R, Bb3, R, G3, G3, R, R,

  F4, R, F4, R, F4, R, G4, R, G4, R,
  F4, R, F4, R, G4, G4, R, F4, R, F4, R,
};
int endingMelody1[] = {
  Eb4, R, E4, R, F4, R, G3, R, Ab3, Ab3, R, R,        //ending 1
};

int endingMelody2[] = {
  Eb4, R, R, E4, R, R, F4, R, R, G4, R, R, Bb4, Ab4, Ab4, Ab4, R, R, R,        //ending 2
};

int repeatedNoteDurations[] = {
  6, 16, 12, 16, 4, 16, 4, 16, 4, 16,
  4, 16, 6, 16, 12, 4, 16, 6, 16, 12, 16,
  4, 16, 4, 16, 4, 16, 6, 16, 12, 2, 2, 16,
  
  6, 16, 12, 16, 4, 16, 4, 16, 4, 16,
  4, 16, 6, 16, 12, 4, 16, 6, 16, 12, 16,
  4, 16, 4, 16, 4, 16, 4, 16, 2, 2, 16,

  6, 16, 12, 16, 4, 16, 4, 16, 4, 16,           
  4, 16, 6, 16, 12, 4, 16, 6, 16, 12, 16,
  4, 16, 4, 16, 4, 16, 6, 16, 12, 2, 2, 16,
  
  6, 16, 12, 16, 4, 16, 4, 16, 4, 16,
  4, 16, 6, 16, 12, 4, 16, 6, 16, 12, 16,
  4, 16, 4, 16, 4, 16, 4, 16, 2, 2, 16,         

  4, 16, 4, 16, 4, 16, 4, 16,
  4, 16, 4, 16, 4, 16, 4, 16,
  4, 16, 4, 16, 4, 16, 4, 16, 2, 2, 16,

  4, 16, 4, 16, 4, 16, 4, 16,
  4, 16, 4, 16, 4, 16, 4, 16,
  6, 16, 4, 12, 16, 4, 16, 4, 16,
  4, 16, 4, 16, 4, 16, 4, 16,

  6, 16, 12, 16, 4, 16, 4, 16, 4, 16,         
  4, 16, 6, 16, 12, 4, 16, 6, 16, 12, 16,
  4, 16, 4, 16, 4, 16, 6, 16, 12, 2, 2, 16,
  
  6, 16, 12, 16, 4, 16, 4, 16, 4, 16,
  4, 16, 6, 16, 12, 4, 16, 6, 16, 12, 16,
};
// note durations: 4 = quarter note, 16 = eighth note, etc.:
int endingNoteDurations1[] = {
  4, 16, 4, 16, 4, 16, 4, 16, 2, 4, 4, 16,      //Ending 1
};
int endingNoteDurations2[] = {
  4, 4, 16, 4, 4, 16, 4, 4, 16, 4, 4, 16, 12, 6, 4, 1, 2, 1, 1,     //Ending 2
};

void setup() {
}

void loop() {

  for (int thisNote = 0; thisNote < numNotes; thisNote++) {

    int noteDuration1 = 1702 / repeatedNoteDurations[thisNote];
    tone(buzzerPin, repeatedMelody[thisNote], noteDuration1);
    delay(noteDuration1);
    noTone(buzzerPin);
  }
  for (int thisNote1 = 0; thisNote1 < endingNumNotes1; thisNote1++) {
    int endingNoteDuration1 = 1702 / endingNoteDurations1[thisNote1];
    tone(buzzerPin, endingMelody1[thisNote1], endingNoteDuration1);
    delay(endingNoteDuration1);
    noTone(buzzerPin);
  }
  for (int thisNote = 0; thisNote < numNotes; thisNote++) {

    int noteDuration1 = 1702 / repeatedNoteDurations[thisNote];
    tone(buzzerPin, repeatedMelody[thisNote], noteDuration1);
    delay(noteDuration1);
    noTone(buzzerPin);
  }
  for (int thisNote2 = 0; thisNote2 < endingNumNotes2; thisNote2++) {
    int endingNoteDuration2 = 1702 / endingNoteDurations2[thisNote2];
    tone(buzzerPin, endingMelody2[thisNote2], endingNoteDuration2);
    delay(endingNoteDuration2);
    noTone(buzzerPin);
  }
}


