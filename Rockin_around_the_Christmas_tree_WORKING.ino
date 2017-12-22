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
int numNotes = 253;
int endingNumNotes1 = 12;
int endingNumNotes2 = 23;

int repeatedMelody[] = {
  Eb4, R, Eb4, R, Eb4, R, F4, R, F4, R,                 // Rock-in' A-round The
  Eb4, R, Eb4, R, F4, F4, R, Eb4, R, Eb4, R,            // Christ-mas Tree- at the 
  G4, R, F4, R, Db4, R, Bb3, R, G3, G3, R, R, R, R,     // Christ-mas par-ty hop----
                            
  F4, R, F4, R, F4, R, G4, R, G4, R,                    // Mis-tle-toe hung where
  F4, R, F4, R, G4, G4, R, F4, R, F4, R,                // you can see- ev-'ry
  Eb4, R, E4, R, F4, R, Db4, R, C4, R, R, R,            // cou-ple tries to stop----
                                    
  Eb4, R, Eb4, R, Eb4, R, F4, R, F4, R,                 // Rock-in' A-round The
  Eb4, R, Eb4, R, F4, F4, R, Eb4, R, Eb4, R,            // Christ-mas Tree- let the
  G4, R, F4, R, Db4, R, Bb3, R, G3, G3, R, R, R, R,     // Christ-mas spir-it ring----
                           
  F4, R, F4, R, F4, R, G4, R, G4, R,                    // Lat-er we'll have some
  F4, R, F4, R, G4, G4, R, F4, R, F4, R,                // pun-kin pie- and we'll
  Eb4, R, E4, R, F4, R, G3, R, Ab3, R, R, R,            // do some car-ol-ing----
                            
  F4, R, E4, R, F4, R, E4, R,                           // You will get a
  F4, R, Ab3, R, Db4, R, F4, R,                         // sen-ti-men-tal
  G4, R, Eb4, R, C4, R, Eb4, R, G4, R, R, R,            // feel-ing when you hear----
                                    
  Ab4, R, G4, R, Ab4, R, G4, R,                         // voic-es sing-ing
  Ab4, R, F4, R, G4, R, Ab4, R,                         // "Let's be jol-ly,
  Bb4, R, R, Ab4, R, G4, R, F4, R,                      // Deck----the halls with
  Eb4, R, F4, R, G4, R, Eb4, R,                         // boughs of hol-ly
                  
  Eb4, R, Eb4, R, Eb4, R, F4, R, F4, R,                 // Rock-in' A-round The
  Eb4, R, Eb4, R, F4, F4, R, Eb4, R, Eb4, R,            // Christ-mas Tree- Have a
  G4, R, F4, R, Db4, R, Bb3, R, G3, G3, R, R, R, R,     // hap-py hol-i-day----

  F4, R, F4, R, F4, R, G4, R, G4, R,                    // Ev-'ry-one danc-ing
  F4, R, F4, R, G4, G4, R, F4, R, F4, R,                // mer-ri-ly-- in the
};
int endingMelody1[] = {
  Eb4, R, E4, R, F4, R, G3, R, Ab3, Ab3, R, R,                                               //Ending 1      // new old fash-ioned way----
};
int endingMelody2[] = {
  Eb4, R, R, E4, R, R, F4, R, R, G4, R, R, Bb4, Ab4, Ab4, Ab4, Ab4, Ab4, R, R, R, R, R,      //Ending 2      // new----old----fash----ioned----way------
};
// note durations: 4 = quarter note, 16 = eighth note, :
int repeatedNoteDurations[] = {
  6, 19.2, 12, 38.4, 4, 12.8, 4, 12.8, 4, 12.8,      
  4, 12.8, 6, 19.2, 12, 4, 9.6, 6, 19.2, 12, 38.4,   
  4, 12.8, 4, 12.8, 4, 12.8, 6, 19.2, 12, 2, 38.4, 2, 16, 4,    
  
  6, 19.2, 12, 38.4, 4, 12.8, 4, 12.8, 4, 12.8,     
  4, 12.8, 6, 19.2, 12, 4, 9.6, 6, 19.2, 12, 38.4,
  4, 12.8, 4, 12.8, 4, 12.8, 4, 12.8, 2, 2, 16, 4,

  6, 19.2, 12, 38.4, 4, 12.8, 4, 12.8, 4, 12.8,      
  4, 12.8, 6, 19.2, 12, 4, 9.6, 6, 19.2, 12, 38.4,  
  4, 12.8, 4, 12.8, 4, 12.8, 6, 19.2, 12, 2, 38.4, 2, 16, 4,                            
  
  6, 19.2, 12, 38.4, 4, 12.8, 4, 12.8, 4, 12.8,     
  4, 12.8, 6, 19.2, 12, 4, 9.6, 6, 19.2, 12, 38.4, 
  4, 12.8, 4, 12.8, 4, 12.8, 4, 12.8, 2, 2, 16, 4,   
                                                                              
  4, 12.8, 4, 12.8, 4, 12.8, 4, 12.8,             
  4, 12.8, 4, 12.8, 4, 12.8, 4, 12.8,           
  4, 12.8, 4, 12.8, 4, 12.8, 4, 12.8, 2, 2, 16, 4,   

  4, 12.8, 4, 12.8, 4, 12.8, 4, 12.8,             
  4, 12.8, 4, 12.8, 4, 12.8, 4, 12.8,
  6, 19.2, 4, 12, 38.4, 4, 12.8, 4, 12.8,
  4, 12.8, 4, 12.8, 4, 12.8, 4, 12.8,

  6, 19.2, 12, 38.4, 4, 12.8, 4, 12.8, 4, 12.8,       
  4, 12.8, 6, 19.2, 12, 4, 9.6, 6, 19.2, 12, 38.4,   
  4, 12.8, 4, 12.8, 4, 12.8, 6, 19.2, 12, 2, 38.4, 2, 16, 4,                         
  
  6, 19.2, 12, 38.4, 4, 12.8, 4, 12.8, 4, 12.8,    
  4, 12.8, 6, 19.2, 12, 4, 9.6, 6, 19.2, 12, 38.4,  
};
int endingNoteDurations1[] = {
  4, 12.8, 4, 12.8, 4, 12.8, 4, 12.8, 2, 4, 4, 16,     //Ending 1
};
int endingNoteDurations2[] = {
  4, 4, 6.4, 4, 4, 6.4,             //5.25
  4, 4, 6.4, 4, 4, 6.4,               //5.25
  12, 6, 2, 4, 2, 4, 3.2, 3.2, 4, 1, 1,    //Ending 2                //
};

void setup() {
}

void loop() {

  for (int thisNote = 0; thisNote < numNotes; thisNote++) {

    int noteDuration1 = 1297 / repeatedNoteDurations[thisNote];
    tone(buzzerPin, repeatedMelody[thisNote], noteDuration1);
    delay(noteDuration1);
    noTone(buzzerPin);
  }
  for (int thisNote1 = 0; thisNote1 < endingNumNotes1; thisNote1++) {
    int endingNoteDuration1 = 1297 / endingNoteDurations1[thisNote1];
    tone(buzzerPin, endingMelody1[thisNote1], endingNoteDuration1);
    delay(endingNoteDuration1);
    noTone(buzzerPin);
  }
  for (int thisNote = 0; thisNote < numNotes; thisNote++) {

    int noteDuration1 = 1297 / repeatedNoteDurations[thisNote];
    tone(buzzerPin, repeatedMelody[thisNote], noteDuration1);
    delay(noteDuration1);
    noTone(buzzerPin);
  }
  for (int thisNote2 = 0; thisNote2 < endingNumNotes2; thisNote2++) {
    int endingNoteDuration2 = 1297 / endingNoteDurations2[thisNote2];
    tone(buzzerPin, endingMelody2[thisNote2], endingNoteDuration2);
    delay(endingNoteDuration2);
    noTone(buzzerPin);
  }
}


