const int soundSensor = 2; /* nimet eri pinneille */
const int pinLEDred = 3;
const int pinLEDgreen = 4;
const int pinLEDblue = 5;
boolean condition = false;

void setup(){
  Serial.begin(9600);
    pinMode(pinLEDred, OUTPUT); /* määritykset mitä eri pinnit tekevät */
    pinMode(pinLEDgreen, OUTPUT);
    pinMode(pinLEDblue, OUTPUT);
    pinMode(soundSensor, INPUT);
}

void loop(){
    int sensorValue = digitalRead(soundSensor); /* määrittää äänisensorin */
      if (sensorValue == HIGH){ /* lukee äänisensoria */
      condition = !condition; /* kääntää arvon */
      digitalWrite(pinLEDred, condition); /* "pinLEDred" voi vaihtaa tarvittaessa muihin eri pinneihin */
        Serial.println (" Ääni kuuluu ");  /* printtaa serialiin jos kuuluu ääni */
     }
}
