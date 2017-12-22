const int buttonPin = 2;
const int stopLED = 3;
const int LED1 = 4;
int reading = LOW;
int previous = LOW;
int outputState = LOW;
#include <LiquidCrystal.h>;
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(stopLED, OUTPUT);
  pinMode(LED1, OUTPUT);
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
    digitalWrite(stopLED, HIGH);
    delay(150);
    digitalWrite(LED1, HIGH);
    }
  else {
    lcd.scrollDisplayLeft();
    digitalWrite(stopLED, LOW);
    digitalWrite(LED1, HIGH);
    delay(100);
    digitalWrite(LED1, LOW);
    delay(50);
    }
  delay(100);
}
