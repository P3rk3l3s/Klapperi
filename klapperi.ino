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
    int sensorValue = digitalRead(soundSensor); /* määrittää mitä äänisensori lukee */
      if (sensorValue == HIGH){ /* lukee äänisensorin muutoksia */
      condition = !condition; /* kääntää arvon */
      digitalWrite(pinLEDgreen, condition);
      digitalWrite(pinLEDblue, condition); /* kaikki ledit tuottavat valkoisen valon */
      digitalWrite(pinLEDred, condition);
        Serial.println (" Ääni kuuluu ");  /* printtaa serialiin jos kuuluu ääni */
     }
}
