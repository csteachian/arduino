/*
    Blink
    Turns on an LED on for one second, then off for one second, repeatedly.
    This example code is in the public domain.

    To upload to your Gemma:
    1) Select Arduino Gemma Tools > Board Menu
    2) Select Arduino Gemma from the Tools > Programmer
    3) Plug in the Gemma, make sure you see the red LED lit
    4) Press the button on the Gemma - verify you see the red LED pulse. This means it is ready to receive data
    5) Select File > Upload Using Programmer above within 10 seconds
    */

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);

}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);
  delay(500);
  digitalWrite(2, LOW);
  digitalWrite(1, HIGH);
  delay(500);
  digitalWrite(0, LOW);
  digitalWrite(2, HIGH);
  delay(500);
}
