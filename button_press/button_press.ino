const int ledPin = 13;
const int buttonPin = 2;

void setup() {

  Serial.begin(9600);

  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:

  int buttonReading = digitalRead(buttonPin);
  Serial.println(buttonReading);
  digitalWrite(ledPin, !buttonReading);

}
