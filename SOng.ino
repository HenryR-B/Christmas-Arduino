#include "pitches.h"

int buzzerPin = 14;
int numNotes = 63;
int numNotes2 = 63;
// notes in the melody:
int melody[] = {
  Eb4, R, Eb4, R, Eb4, R, F4, R, F4, R,
  Eb4, R, Eb4, R, F4, F4, R, Eb4, R, Eb4, R,
  G4, R, F4, R, Db4, R, Bb3, R, G3, G3, r,

  F4, R, F4, R, F4, R, G4, R, G4, R,
  F4, R, F4, R, G4, G4, R, F4, R, F4, R,
  Eb4, R, E4, R, F4, R, Db4, R, C4, r,
};
int melody2[] = {
  Eb4, R, Eb4, R, Eb4, R, F4, R, F4, R,
  Eb4, R, Eb4, R, F4, R, F4, R, Eb4, R, Eb4, R,
  G4, R, F4, R, Db4, R, Bb3, R, G3, G3, r,

  F4, R, F4, R, F4, R, G4, R, G4, R,
  F4, R, F4, R, G4, R, G4, R, F4, R, F4, R,
  Eb4, R, E4, R, F4, R, G3, R, Ab3, r,
};
/*
  F4, E4, F4, E4,
  F4, Ab3, Db4, F4,
  G4, Eb4, C4, Eb4, G4,

  Ab4, G4, Ab4, G4,
  Ab4, F4, G4, Ab4,
  Bb4, r, Ab4, G4, F4,
  Eb4, F4, G4, Eb4
  */

// note durations: 4 = quarter note, 16 = eighth note, etc.:
int noteDurations[] = {
  6, 16, 12, 16, 4, 16, 4, 16, 4, 16,
  4, 16, 6, 16, 12, 4, 16, 6, 16, 12, 16,
  4, 16, 4, 16, 4, 16, 6, 16, 12, 2, 2,
  
  6, 16, 12, 16, 4, 16, 4, 16, 4, 16,
  4, 16, 6, 16, 12, 4, 16, 6, 16, 12, 16,
  4, 16, 4, 16, 4, 16, 4, 16, 2, 2,
};

int noteDurations2[] = {
  6, 16, 12, 16, 4, 16, 4, 16, 4, 16,
  4, 16, 6, 16, 12, 4, 16, 6, 16, 12, 16,
  4, 16, 4, 16, 4, 16, 6, 16, 12, 2, 2,
  
  6, 16, 12, 16, 4, 16, 4, 16, 4, 16,
  4, 16, 6, 16, 12, 4, 16, 6, 16, 12, 16,
  4, 16, 4, 16, 4, 16, 4, 16, 2, 2,
};
/*
  4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4, 4, 4,

  4, 4, 4, 4,
  4, 4, 4, 4,
  6, 4, 12, 4, 4,
  4, 4, 4, 4
  
  */

void setup() {
  for (int thisNote = 0; thisNote < numNotes; thisNote++) {

    int noteDuration = 1702 / noteDurations[thisNote];
    tone(buzzerPin, melody[thisNote], noteDuration);
    delay(noteDuration);
    noTone(buzzerPin);
  }
  for (int i = 0; i < numNotes2; i++) {
    int noteDuration2 = 1702 / noteDurations2[i];
    tone(buzzerPin, melody2[i], noteDuration2);
    delay(noteDuration2);
  }
}

void loop() {
  // no need to repeat the melody.
}


