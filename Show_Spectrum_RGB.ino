const int RED = 7;
const int GREEN = 6;
const int BLUE = 5;

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}
void loop() {
  showSpectrum();
}
void showSpectrum() {
  for (int x = 0; x <= 767; x++)
  {
    RGB(x);      // Increment x and call RGB() to progress through colors.
    delay(10);   // Delay for 10 ms (1/100th of a second) - to help the "smoothing"
  }
}
void RGB(int color) {
  int redIntensity;
  int greenIntensity;
  int blueIntensity;
  color = constrain(color, 0, 767); // constrain the input value to a range of values from 0 to 767
    // if statement breaks down the "color" into three ranges:
  if (color <= 255) {       // RANGE 1 (0 - 255) - red to green
    redIntensity = 255 - color;    // red goes from on to off
    greenIntensity = color;        // green goes from off to on
    blueIntensity = 0;             // blue is always off
  }
  else if (color <= 511) { // RANGE 2 (256 - 511) - green to blue
    redIntensity = 0;                     // red is always off
    greenIntensity = 511 - color;         // green on to off
    blueIntensity = color - 256;          // blue off to on
  }
  else {                   // RANGE 3 ( >= 512)- blue to red
    redIntensity = color - 512;         // red off to on
    greenIntensity = 0;                 // green is always off
    blueIntensity = 767 - color;        // blue on to off
  }
  // "send" intensity values to the Red, Green, Blue Pins using analogWrite()
  analogWrite(RED, redIntensity);
  analogWrite(GREEN, greenIntensity);
  analogWrite(BLUE, blueIntensity);
}

