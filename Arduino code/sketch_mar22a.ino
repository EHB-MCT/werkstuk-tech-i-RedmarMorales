const int buttonPin = 2;
int buttonState = 0;

void setup()
{
 // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  
  pinMode(3,OUTPUT);
 // RED LED
  pinMode(4,OUTPUT);
 // RED LED
  pinMode(5,OUTPUT);
 // RED LED
}

void loop() {
// read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
  digitalWrite(3, HIGH);
  delay(250);
  digitalWrite(3, LOW);
  delay(250);
  digitalWrite(5, HIGH);
  delay(250);
  digitalWrite(5, LOW);
  delay(250);
  digitalWrite(4, HIGH);
  delay(250);
  digitalWrite(4, LOW);
  delay(250); // Wait for 1000 millisecond(s)
} else {
  // turn LED off:
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
}
}
