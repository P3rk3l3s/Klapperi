int soundSensor = 2;
int redLEDpin = 3;
int blueLEDpin = 4;
int greenLEDpin = 5;
int val;
boolean condition = 0;

void setup(){
  Serial.begin(9600);
    pinMode(soundSensor, INPUT);
    pinMode(redLEDpin, OUTPUT);
    pinMode(blueLEDpin, OUTPUT);
    pinMode(greenLEDpin, OUTPUT);
}
void red(){
  analogWrite(3,255);
  }
void green(){
  analogWrite(4, 255);
  }
void blue(){
  analogWrite(5, 255);
  }
void clean(){
  analogWrite(11,0);
  analogWrite(10,0);
  analogWrite( 9,0);   
  }
void loop(){
  int sensorValue = digitalRead(soundSensor);
  if (sensorValue == 255)
    condition = !condition;
     analogWrite(3, val);
     analogWrite(4, 255 - val);
     analogWrite(5, val);
    Serial.println (val, DEC);
    Serial.println (" Ääni tulee ");
  }
  clean();
  delay (0);
}
