int soundSensor = 2;
int pinLED = 3;
int val = 0;
boolean condition = 0;

void setup(){
  Serial.begin(9600);
    pinMode(pinLED, OUTPUT);
    pinMode(soundSensor, INPUT);
}

void loop(){
  int sensorValue = digitalRead(soundSensor);
  if (sensorValue == HIGH)
  {
    condition = !condition;
    digitalWrite(pinLED, condition);
    Serial.println (" Ääni tulee ");
  }
  delay (0);
}
