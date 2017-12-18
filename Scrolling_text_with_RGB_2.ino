const int buttonPin = 2;
const int RED = 7;
const int GREEN = 6;
const int BLUE = 5;
const int LED1 = 4;
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
    digitalWrite(RED, HIGH);
    digitalWrite(LED1, HIGH);
    delay(200);
    }
  else {
    mainColours();
    }
  delay(100);
}
void mainColours()
{
  // all LEDs off
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
  reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    return; }
  for (int a=0; a<=3; a++) {
    digitalWrite(LED1, HIGH);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    return; }
    delay(Time);
    digitalWrite(LED1, LOW);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    return; }
    delay(Time);
  }
    
  // Red
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
  reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    return; }
  for (int a=0; a<=3; a++) {
    digitalWrite(LED1, HIGH);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    return; }
    delay(Time);
    digitalWrite(LED1, LOW);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    return; }
    delay(Time);
  }

  // Green
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, LOW);
  reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    return; }
  for (int a=0; a<=3; a++) {
    digitalWrite(LED1, HIGH);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    return; }
    delay(Time);
    digitalWrite(LED1, LOW);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    return; }
    delay(Time);
  }
  // Blue
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, HIGH);
  reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    return; }
  for (int a=0; a<=3; a++){
    digitalWrite(LED1, HIGH);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    return; }
    delay(Time);
    digitalWrite(LED1, LOW);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    return; }
    delay(Time);
  }
  // Yellow (Red and Green)
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, LOW);
  reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    return; }
  for (int a=0; a<=3; a++){
    digitalWrite(LED1, HIGH);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    return; }
    delay(Time);
    digitalWrite(LED1, LOW);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    return; }
    delay(Time);
  }
  // Cyan (Green and Blue)
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, HIGH);
  reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    return; }
  for (int a=0; a<=3; a++){
    digitalWrite(LED1, HIGH);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    return; }
    delay(Time);
    digitalWrite(LED1, LOW);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    return; }
    delay(Time);
  }
  // Purple (Red and Blue)
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, HIGH);
  reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    return; }
  for (int a=0; a<=3; a++){
    digitalWrite(LED1, HIGH);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    return; }
    delay(Time);
    digitalWrite(LED1, LOW);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    return; }
    delay(Time);
  }
  // White (turn all the LEDs on)
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, HIGH);
  reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    return; }
  for (int a=0; a<=3; a++){
    digitalWrite(LED1, HIGH);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    return; }
    delay(Time);
    digitalWrite(LED1, LOW);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    return; }
    delay(Time);
  }
}

