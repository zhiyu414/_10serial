

// digital pin 2 has a pushbutton attached to it. Give it a name:
int pushButton = 2;
int ledPin =  13;
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT_PULLUP);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int buttonState = digitalRead(pushButton);
  // print out the state of the button:
   if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin,HIGH );
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
  Serial.println(buttonState);
  delay(1);        // delay in between reads for stability
}
