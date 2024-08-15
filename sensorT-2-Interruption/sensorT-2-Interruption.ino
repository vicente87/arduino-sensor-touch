

const int LEDPin = 13;
const int intPinOn = 2;
const int intPinOff = 3;


void setup() {
  
  pinMode(LEDPin, OUTPUT);
  pinMode(intPinOn, INPUT_PULLUP);
  pinMode(intPinOff, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(intPinOn), led_On, RISING);
  attachInterrupt(digitalPinToInterrupt(intPinOff), led_Off, RISING);
  digitalWrite(LEDPin, LOW);
}

void loop() {

}

void led_On() {
  digitalWrite(LEDPin, HIGH);
}

void led_Off() {
  digitalWrite(LEDPin, LOW);
}