
const int umbral = 50;

bool led = false;

void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
}

bool micro() {
  int n = analogRead(0);
  //Serial.println(n);
  if (n >= umbral) {
    return true;
  }
  return false;
}

void loop() {

  if (micro()) {
    led = !led;
    Serial.print("LED: ");
    Serial.println(led);
    digitalWrite(2, led);
    delay(200);
  }

}
