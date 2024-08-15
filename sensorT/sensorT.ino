# define sensorT 9

void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
pinMode(sensorT,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13,digitalRead(sensorT));
}
