const int ledpin=13;
const int buzzerPin = 9;
const int fireSensorPin = 8;
void setup()
{
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(fireSensorPin, INPUT);
}
void loop()
{
  int fireValue = digitalRead(fireSensorPin);
  Serial.println(fireValue);
  if(fireValue == 0)
  {
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(ledpin, HIGH);
    delay(5000);
  }
  else
  {
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledpin, LOW);
  }
  delay(500);
}
