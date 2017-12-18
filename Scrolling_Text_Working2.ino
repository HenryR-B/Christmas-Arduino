int buttonPin = 2;
int LED = 3;
int reading = LOW;
int previous = LOW;
int outputState = LOW;
#include <LiquidCrystal.h>;
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(LED, OUTPUT);
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
    digitalWrite(LED, HIGH);
    delay(150);
  }
  else {
    lcd.scrollDisplayLeft();
    delay(150);
    digitalWrite(LED, LOW);
  }
  delay(100);
}
