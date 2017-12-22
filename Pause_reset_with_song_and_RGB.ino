const int buttonPin = 2;
const int resetPin = 15;
const int RED = 7;
const int GREEN = 6;
const int BLUE = 5;
const int YELLOW = 4;
const int LED2 = 3;
boolean reading = false;
boolean previous = false;
boolean outputState = false;
boolean readingRESET = false;
boolean previousRESET = false;
boolean outputStateRESET = false;
boolean play = true;
unsigned long interval = 425.5;
unsigned long currentMillis;
unsigned long previousMillis = 0;
boolean stateLED = false;
unsigned long scrollinterval = 250;
unsigned long scrollcurrentMillis;
unsigned long scrollpreviousMillis = 0;
boolean ScrollState = true;
unsigned long RGBinterval = 851;
unsigned long RGBcurrentMillis;
unsigned long RGBpreviousMillis = 0;
int RGBState = 0;
#include <LiquidCrystal.h>;
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
const int G3 =  196;
const int Ab3 = 208;
const int Bb3 = 233;
const int C4  = 262;
const int Db4 = 277;
const int Eb4 = 311;
const int E4  = 330;
const int F4  = 349;
const int G4  = 392;
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
  pinMode(buttonPin, INPUT);
  pinMode(resetPin, INPUT);
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  lcd.begin (16, 2);
  lcd.print ("                  Merry Christmas!!!     Happy Holidays!!!");
  digitalWrite(YELLOW, stateLED);
}
void loop() {
  reading = digitalRead(buttonPin);
  if (reading == true && previous == false) {
    outputState = !outputState;
  }
  previous = reading;

  if (outputState == false) {
    digitalWrite(RED, true);
    digitalWrite(YELLOW, false);
    digitalWrite(LED2, true);
    noTone(buzzerPin);
  }
  else {
    for (int thisNote = 0; thisNote < numNotes; thisNote++) {
      MillisLoop();
      pausebuttonLoop();
      resetbuttonLoop();
      if (!play) {
        break;
      }
      int noteDuration1 = 1297 / repeatedNoteDurations[thisNote];
      tone(buzzerPin, repeatedMelody[thisNote], noteDuration1);
      for (int i = 1; i <= 16; i++) {
        delay(noteDuration1 / 16);
        MillisLoop();
      }
      noTone(buzzerPin);
    }
    for (int thisNote1 = 0; thisNote1 < endingNumNotes1; thisNote1++) {
      MillisLoop();
      pausebuttonLoop();
      resetbuttonLoop();
      if (!play) {
        break;
      }
      int endingNoteDuration1 = 1297 / endingNoteDurations1[thisNote1];
      tone(buzzerPin, endingMelody1[thisNote1], endingNoteDuration1);
      for (int i = 1; i <= 16; i++) {
        delay(endingNoteDuration1 / 16);
        MillisLoop();
      }
      noTone(buzzerPin);
    }
    for (int thisNote = 0; thisNote < numNotes; thisNote++) {
      MillisLoop();
      pausebuttonLoop();
      resetbuttonLoop();
      if (!play) {
        break;
      }
      int noteDuration1 = 1297 / repeatedNoteDurations[thisNote];
      tone(buzzerPin, repeatedMelody[thisNote], noteDuration1);
      for (int i = 1; i <= 16; i++) {
        delay(noteDuration1 / 16);
        MillisLoop();
      }
      noTone(buzzerPin);
    }
    for (int thisNote2 = 0; thisNote2 < endingNumNotes2; thisNote2++) {
      MillisLoop();
      pausebuttonLoop();
      resetbuttonLoop();
      if (!play) {
        break;
      }
      int endingNoteDuration2 = 1297 / endingNoteDurations2[thisNote2];
      tone(buzzerPin, endingMelody2[thisNote2], endingNoteDuration2);
      for (int i = 1; i <= 16; i++) {
        delay(endingNoteDuration2 / 16);
        MillisLoop();
      }
      noTone(buzzerPin);
    }
  }
  delay(100);
}
void MillisLoop() {
  currentMillis = millis();
  if ((unsigned long)(currentMillis - previousMillis) >= interval) {
    stateLED = !stateLED;
    digitalWrite(YELLOW, stateLED);
    previousMillis = millis();
  }
  scrollcurrentMillis = millis();
  if ((unsigned long)(scrollcurrentMillis - scrollpreviousMillis) >= scrollinterval) {
    ScrollState = !ScrollState;
    lcd.scrollDisplayLeft();
    scrollpreviousMillis = millis();
  }
  RGBcurrentMillis = millis();
  if ((unsigned long)(RGBcurrentMillis - RGBpreviousMillis) >= RGBinterval) {
    reading = digitalRead(buttonPin);
    if (reading == true && previous == false) {
      outputState = !outputState;
    }
    previous = reading;
    if (outputState == true) {
      RGBState++;
      switch (RGBState) {
        case 1:
          digitalWrite(RED, true);
          digitalWrite(GREEN, false);
          digitalWrite(BLUE, false);
          break;
        case 2:
          digitalWrite(RED, false);
          digitalWrite(GREEN, true);
          digitalWrite(BLUE, false);
          break;
        case 3:
          digitalWrite(RED, false);
          digitalWrite(GREEN, false);
          digitalWrite(BLUE, true);
          break;
        case 4:
          digitalWrite(RED, true);
          digitalWrite(GREEN, true);
          digitalWrite(BLUE, false);
          break;
        case 5:
          digitalWrite(RED, false);
          digitalWrite(GREEN, true);
          digitalWrite(BLUE, true);
          break;
        case 6:
          digitalWrite(RED, true);
          digitalWrite(GREEN, false);
          digitalWrite(BLUE, true);
          break;
        case 7:
          digitalWrite(RED, true);
          digitalWrite(GREEN, true);
          digitalWrite(BLUE, true);
          break;
        case 8:
          digitalWrite(RED, false);
          digitalWrite(GREEN, false);
          digitalWrite(BLUE, false);
          RGBState = 0;
          break;
      }
    }
    RGBpreviousMillis = millis();
  }
}
void pausebuttonLoop() {
  reading = digitalRead(buttonPin);
  if (reading == true && previous == false) {
    outputState = !outputState;
  }
  previous = reading;

  while (outputState == false) {
    digitalWrite(BLUE, false);
    digitalWrite(GREEN, false);
    digitalWrite(RED, true);
    digitalWrite(YELLOW, false);
    digitalWrite(LED2, true);
    noTone(buzzerPin);
    reading = digitalRead(buttonPin);
    if (reading == true && previous == false) {
      outputState = !outputState;
    }
    previous = reading;
    if (outputState == true) {
      digitalWrite(LED2, false);
    }
  }
}
void resetbuttonLoop() {
  readingRESET = digitalRead(resetPin);
  if (readingRESET == true && previousRESET == false) {
    outputStateRESET = !outputStateRESET;
  }
  previousRESET = readingRESET;
  if (outputStateRESET == false) {
    play = false;
    digitalWrite(BLUE, false);
    digitalWrite(GREEN, false);
    digitalWrite(RED, true);
    digitalWrite(YELLOW, false);
    digitalWrite(LED2, true);
    noTone(buzzerPin);

  }
  else {
    play = true;
    digitalWrite(RED, false);

  }
}
