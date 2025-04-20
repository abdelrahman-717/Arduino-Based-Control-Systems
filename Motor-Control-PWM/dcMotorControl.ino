int dir1 = 13;
int dir2 = 12;
int Switch = 0;
int speed;
int potPin = A0;
int motorPin = 10;


void setup() {

  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT);
  pinMode(Switch, INPUT);
}

void loop() {
  if (digitalRead(Switch) == HIGH)
  {
    digitalWrite(dir1, HIGH);
    digitalWrite(dir2, LOW);
    delay(200);
  }
  else 
  {
    digitalWrite(dir1, LOW);
    digitalWrite(dir2, HIGH);
    delay(200);
  }

  speed = analogRead(potPin) / 4 ;
  analogWrite(motorPin, speed);
  delay(20);

}
