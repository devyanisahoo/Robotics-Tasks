int led = 7;
int button = 4;
bool ledOn = false;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(button) == LOW) {
    ledOn = !ledOn;
    delay(200);
    while (digitalRead(button) == LOW);
  }
  if (ledOn) {
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
  }
}
