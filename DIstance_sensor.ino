const int echo = 13;
const int trig = 12;

int distance = 0;
int duration = 0;

int led = 3;

void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);

  pinMode(led, OUTPUT);
}

void loop()
{
  digitalWrite(trig, HIGH);
  delay(1000);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  distance = (duration/2)/28.5;
  Serial.println(distance);

  digitalWrite(led, 1);
}
