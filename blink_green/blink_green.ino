
const int greenLed = 7;
const int builtInLed = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(greenLed, OUTPUT);
  pinMode(builtInLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(builtInLed, LOW);
  digitalWrite(greenLed, HIGH);
  delay(1000);
  digitalWrite(greenLed, LOW);
  delay(1000);

}
