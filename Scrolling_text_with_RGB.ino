const int buttonPin = 2;
const int RED = 7;
const int GREEN = 6;
const int BLUE = 5;
const int LED1 = 4;
const int displayTime = 1000;
int reading = LOW;
int previous = LOW;
int outputState = LOW;
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
    return; }
  for (int a=0; a<=3; a++);
    digitalWrite(LED1, HIGH);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    return; }
    delay(200);
    digitalWrite(LED1, LOW);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    return; }
    delay(200);
  // Red
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
  reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    return; }
  for (int a=0; a<=3; a++);
    digitalWrite(LED1, HIGH);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    return; }
    delay(200);
    digitalWrite(LED1, LOW);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    return; }
    delay(200);

  // Green
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, LOW);
  reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    return; }
  for (int a=0; a<=3; a++);
    digitalWrite(LED1, HIGH);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    return; }
    delay(200);
    digitalWrite(LED1, LOW);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    return; }
    delay(200);

  // Blue
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, HIGH);
  reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    return; }
  for (int a=0; a<=3; a++);
    digitalWrite(LED1, HIGH);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    return; }
    delay(200);
    digitalWrite(LED1, LOW);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    return; }
    delay(200);
    
  // Yellow (Red and Green)
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, LOW);
  reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    return; }
  for (int a=0; a<=3; a++);
    digitalWrite(LED1, HIGH);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    return; }
    delay(200);
    digitalWrite(LED1, LOW);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    return; }
    delay(200);

  // Cyan (Green and Blue)
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, HIGH);
  reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    return; }
  for (int a=0; a<=3; a++);
    digitalWrite(LED1, HIGH);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    return; }
    delay(200);
    digitalWrite(LED1, LOW);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    return; }
    delay(200);

  // Purple (Red and Blue)
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, HIGH);
  reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    return; }
  for (int a=0; a<=3; a++);
    digitalWrite(LED1, HIGH);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    return; }
    delay(200);
    digitalWrite(LED1, LOW);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    return; }
    delay(200);

  // White (turn all the LEDs on)
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, HIGH);
  reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    return; }
  for (int a=0; a<=3; a++);
    digitalWrite(LED1, HIGH);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    return; }
    delay(200);
    digitalWrite(LED1, LOW);
    lcd.scrollDisplayLeft();
    reading = digitalRead(buttonPin);
  if (reading == HIGH && previous == LOW) {
    outputState = !outputState; }
  previous = reading;
  if (outputState == LOW) {
    return; }
    delay(200);
}
void showSpectrum() {
  for (int x = 0; x <= 767; x++)
  {
    RGB(x);      // Increment x and call RGB() to progress through colors.
    delay(10);   // Delay for 10 ms (1/100th of a second) - to help the "smoothing"
  }
}
void RGB(int color)
{
  int redIntensity;
  int greenIntensity;
  int blueIntensity;

  color = constrain(color, 0, 767); // constrain the input value to a range of values from 0 to 767

    // if statement breaks down the "color" into three ranges:
  if (color <= 255)       // RANGE 1 (0 - 255) - red to green
  {
    redIntensity = 255 - color;    // red goes from on to off
    greenIntensity = color;        // green goes from off to on
    blueIntensity = 0;             // blue is always off
  }
  else if (color <= 511)  // RANGE 2 (256 - 511) - green to blue
  {
    redIntensity = 0;                     // red is always off
    greenIntensity = 511 - color;         // green on to off
    blueIntensity = color - 256;          // blue off to on
  }
  else                    // RANGE 3 ( >= 512)- blue to red
  {
    redIntensity = color - 512;         // red off to on
    greenIntensity = 0;                 // green is always off
    blueIntensity = 767 - color;        // blue on to off
  }

  // "send" intensity values to the Red, Green, Blue Pins using analogWrite()
  analogWrite(RED, redIntensity);
  analogWrite(GREEN, greenIntensity);
  analogWrite(BLUE, blueIntensity);
}



