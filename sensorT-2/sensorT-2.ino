# define sensorOn 9
# define sensorOff 8

bool state =false;

void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
pinMode(sensorOn,INPUT);
pinMode(sensorOff,INPUT);
digitalWrite(13,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:

if (digitalRead(sensorOn)==HIGH && state==false){
  state=1;
  digitalWrite(13,HIGH);
}
if (digitalRead(sensorOff)==HIGH && state==true){
  state=0;
  digitalWrite(13,LOW);
}

}