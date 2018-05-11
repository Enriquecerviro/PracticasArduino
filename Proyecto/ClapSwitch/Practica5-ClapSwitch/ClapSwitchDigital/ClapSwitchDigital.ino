
const int pinMicro = 3;
const int pinLed = 2;
bool led = false;

void setup() {
  //Serial.begin(9600);
  pinMode(pinMicro,INPUT);
  pinMode(pinLed,OUTPUT);
}

void loop() {

  if (digitalRead(pinMicro)) {
    led = !led;
    //Serial.print("LED: ");
    //Serial.println(led);
    digitalWrite(pinLed, led);
    delay(200);
  }

}
