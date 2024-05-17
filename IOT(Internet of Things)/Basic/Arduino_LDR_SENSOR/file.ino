const int LDRPin = 2; 
const int LEDPin = 9;  

void setup() {
  Serial.begin(9600);
  pinMode(LEDPin, OUTPUT);
  pinMode(LDRPin, INPUT_PULLUP);
}

void loop() {
  int LDRValue = digitalRead(LDRPin);  //digital input
  Serial.println(LDRValue);

  if (LDRValue == 1) {
    digitalWrite(LEDPin, HIGH);
  } else {
    digitalWrite(LEDPin, LOW);
  }

  delay(500);
}
