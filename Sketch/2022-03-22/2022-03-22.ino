int sensorPin = A0;
int buzzerPin = 8;
int ledRedPin = 7;
int ledGreenPin = 10;
int motorPin = 5;
int sensor;

 void setup() {
 Serial.begin(9600);
 pinMode(buzzerPin, OUTPUT);
 pinMode(ledRedPin, OUTPUT);
 pinMode(ledGreenPin, OUTPUT);
 pinMode(motorPin, OUTPUT);
 pinMode(sensorPin, INPUT); 
 }

void loop() {
 sensor = analogRead(sensorPin);
 Serial.println(sensor);

     if (sensor > 800) {
     tone(buzzerPin, 880);
     digitalWrite(ledGreenPin,LOW); 
     digitalWrite(ledRedPin,HIGH); 
     digitalWrite(motorPin,HIGH);
     delay(1000);
    }
    else {
      noTone(buzzerPin);
      digitalWrite(ledRedPin,LOW); 
      digitalWrite(ledGreenPin,HIGH); 
      digitalWrite(motorPin,LOW);
      
    }

}
