const int ledPin = 9;
int led = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;

void setup()
{
  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);
  pinMode(led, OUTPUT);     
  pinMode(led2, OUTPUT);     
  pinMode(led3, OUTPUT);     
  pinMode(led4, OUTPUT);
}

void loop() {
  byte brightness;

  if (Serial.available()) {
    brightness = Serial.read();
    analogWrite(ledPin, brightness);
    analogWrite(led, brightness);
    analogWrite(led2, brightness);
    analogWrite(led3, brightness);
    analogWrite(led4, brightness);
  }
}

