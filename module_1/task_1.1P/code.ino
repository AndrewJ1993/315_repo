/*
  This program blinks pin 13 of the Arduino (the
  built-in LED) if the PIR motion sensor reads high
  on digital pin 2.
*/

int sensorState = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  // read the state of the sensor/digital input
  sensorState = digitalRead(2);
  
  // check if sensor pin is HIGH. if it is, set the
  // LED on.
  if (sensorState == HIGH) 
  {
  	digitalWrite(13, HIGH);
    Serial.println("Sensor activated!");
  } 
  else 
  {
    digitalWrite(13, LOW);
    Serial.println("Sensor deactivated!");
  }
  delay(100);
}