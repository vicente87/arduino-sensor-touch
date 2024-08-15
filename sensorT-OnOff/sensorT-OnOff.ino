# define sensorOnOff 9


bool state =false;

void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
pinMode(sensorOnOff,INPUT);

digitalWrite(13,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:

if (digitalRead(sensorOnOff)==HIGH ){
  state=!state;
  digitalWrite(13,state);
  while(digitalRead(sensorOnOff)==HIGH){}

  
  
}


}