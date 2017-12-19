const int buttonPin = 2;
const int RED = 7;
const int GREEN = 6;
const int BLUE = 5;
const int YELLOW = 4;
int reading = LOW;
int previous = LOW;
int outputState = LOW;
int Time = 300;
#include <LiquidCrystal.h>;
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  lcd.begin (16, 2);
  lcd.print ("                  Merry Christmas!!!     Happy Holidays!!!");
}
void loop() {
  reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState;
  }
  previous = reading;

  if (outputState == LOW) {
    digitalWrite(RED, HIGH);
    digitalWrite(YELLOW, HIGH);
    delay(200);
  }
  else {
    mainColours();
  }
  delay(100);
}

void colourloop() {
  for (int a = 0; a <= 3; a++) {
    digitalWrite(YELLOW, HIGH);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
    if (reading == HIGH && previous == LOW) {
      outputState = !outputState;
    }
    previous = reading;
    if (outputState == LOW) {
      digitalWrite(RED, HIGH);
      digitalWrite(GREEN, LOW);
      digitalWrite(BLUE, LOW);
      return;
    }
    delay(Time);
    digitalWrite(YELLOW, LOW);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
    if (reading == HIGH && previous == LOW) {
      outputState = !outputState;
    }
    previous = reading;
    if (outputState == LOW) {
      digitalWrite(RED, HIGH);
      digitalWrite(GREEN, LOW);
      digitalWrite(BLUE, LOW);
      return;
    }
    delay(Time);
  }
}
void mainColours()
{
  // all LEDs off
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
  colourloop();
  // Red
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
  colourloop();
  // Green
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, LOW);
  colourloop();
  // Blue
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, HIGH);
  colourloop();
  // Yellow (Red and Green)
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, LOW);
  colourloop();
  // Cyan (Green and Blue)
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, HIGH);
  colourloop();
  // Purple (Red and Blue)
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, HIGH);
  colourloop();
  // White (turn all the LEDs on)
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, HIGH);
  colourloop();
}

