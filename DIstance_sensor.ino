const int ledRED = 8;
const int ledYELLOW = 9;
const int ledGREEN = 10;

const int trig = 12;
const int echo = 13;

long duration;
int distance;

void setup() {
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);

  pinMode(ledRED, OUTPUT);
  pinMode(ledYELLOW, OUTPUT);
  pinMode(ledGREEN, OUTPUT);

  Serial.begin(9600);
}
void loop() {
digitalWrite(trig, LOW);
delay(2);

digitalWrite(trig, HIGH);
delay(10);
digitalWrite(trig, LOW);

duration = pulseIn(echo, HIGH);
distance = duration * 0.034/2;

Serial.println(distance);

if(distance <= 20)
{
  digitalWrite(ledRED, HIGH);
  digitalWrite(ledYELLOW, LOW);
  digitalWrite(ledGREEN, LOW);
}
if(distance >= 21 && distance <= 40)
{
  digitalWrite(ledRED, LOW);
  digitalWrite(ledYELLOW, HIGH);
  digitalWrite(ledGREEN, LOW)  ;
}
if(distance >= 41 && distance <= 60)
{
  digitalWrite(ledRED, LOW);
  digitalWrite(ledYELLOW, LOW);
  digitalWrite(ledGREEN, HIGH);
}
if(distance>= 61)
{
  digitalWrite(ledRED, HIGH);
  delay(100);
  digitalWrite(ledRED, LOW);
  delay(100);
    digitalWrite(ledYELLOW, HIGH);
  delay(100);
  digitalWrite(ledYELLOW, LOW);
  delay(100);
    digitalWrite(ledGREEN, HIGH);
  delay(100);
  digitalWrite(ledGREEN, LOW);
  delay(100);
}
}
