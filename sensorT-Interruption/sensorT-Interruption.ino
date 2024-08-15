

const int LEDPin = 13;
const int intPin = 2;
volatile bool state = LOW; // definimos como volatil

void setup() {
  
  pinMode(LEDPin, OUTPUT);
  pinMode(intPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(intPin), blink, RISING);
  digitalWrite(LEDPin, LOW);
}

void loop() {

}

void blink() {
  state = !state; // cambiamos el state para que parpadee
  digitalWrite(LEDPin, state);
}