int soundSensor = 2;
int pinLEDred = 3;
int pinLEDgreen = 4;
int pinLEDblue = 5;
int val = 0;
boolean condition = 0;

void setup(){
  Serial.begin(9600);
    pinMode(pinLEDred, OUTPUT);
    pinMode(pinLEDgreen, OUTPUT);
    pinMode(pinLEDblue, OUTPUT);
    pinMode(soundSensor, INPUT);
}

void loop(){
  int sensorValue = digitalRead(soundSensor);
  if (sensorValue == HIGH)
  {
    condition = !condition;
    digitalWrite(pinLEDred, condition);
    Serial.println (" Ääni tulee ");
  }
  delay (0);
}
