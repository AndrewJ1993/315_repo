/*
  This program blinks pin 13 of the Arduino (the
  built-in LED) if the PIR motion sensor reads high
  on digital pin 2.
*/

int sensorState = 0;
int sensorPin = 2;
int ledPin = 13;

void setup()
{
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

  attachInterrupt(digitalPinToInterrupt(sensorPin), toggle, CHANGE);
}

void loop()
{
  delay(1000);
}

void toggle()
{
  	sensorState = digitalRead(sensorPin);
  	digitalWrite(ledPin, sensorState);
  	Serial.println("Sensor State: " + String(sensorState));
}
