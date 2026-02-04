int ledPin=7;
int buttonPin=4;
void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  if(digitalRead(buttonPin)==HIGH){
    digitalWrite(ledPin,HIGH);
    delay(100);
    digitalWrite(ledPin,LOW);
    delay(100);
    digitalWrite(ledPin,HIGH);
    delay(1000);
    digitalWrite(ledPin,LOW);
    delay(200);
    digitalWrite(ledPin,HIGH);
    delay(200);
    digitalWrite(ledPin,LOW);
    delay(1000);
    Serial.println("ON");
    
  }else{
  digitalWrite(ledPin,LOW);
    Serial.println("OFF");
  }
}
