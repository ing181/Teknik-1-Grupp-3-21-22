
int outPin = 8;
int counter = 0;
void setup() {
  // put your setup code here, to run once:

pinMode(outPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Vilkor
    if ( counter < 10 ) {
      digitalWrite(outPin,HIGH);
      delay(500);
      digitalWrite(outPin,LOW);
      delay(500);
      digitalWrite(outPin,HIGH);
      delay(1000);
      digitalWrite(outPin,LOW);
      delay(1000);
      counter = counter + 1;
    }
}
