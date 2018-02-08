const int ledPin = 12;
const int buttonPin = 2;

bool isOn = false;
bool shouldChange = false; //TODO: implement debounce

void setup() {

  Serial.begin(9600);

  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:

  int buttonReading = digitalRead(buttonPin);

  if (buttonReading > 0 && shouldChange) {
    isOn = !isOn;
    shouldChange = false;
  }
  else {
    shouldChange = true;
  }

  Serial.println(shouldChange);

  if (isOn) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }




}
