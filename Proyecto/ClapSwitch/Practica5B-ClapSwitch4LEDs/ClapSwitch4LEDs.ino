
#define TIEMPO_CLAP 1500

const int pinMicro = 6;
const int pinLed[4] = {2,3,4,5};
bool led[4] = {false,false,false,false};
int contador = 0;
unsigned long lastClap = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pinMicro,INPUT); //inicializar micro input
  for (int i=0; i<4; i++) { //iterar todos los LED
    pinMode(pinLed[i], OUTPUT); //inicializar cada LED output
  }
}

void actuarLED() {
  if (contador > 1 && contador < 7) {
    if (contador == 6) {
      for (int i=0; i<4; i++) {
        digitalWrite(pinLed[i], LOW);
        led[i] = false;
      }
    } else {
      int ledIndex = contador - 2;
      bool ledNow = !led[ledIndex];
      digitalWrite(pinLed[ledIndex], ledNow);
      led[ledIndex] = ledNow;
      Serial.print("LED #");
      Serial.print(ledIndex);
      Serial.print(" -> ");
      Serial.println(ledNow);
    }
  }
  contador = 0;
}

void loop() {

  unsigned long currentMillis = millis();
  
  if (digitalRead(pinMicro)) {
    lastClap = currentMillis;
    contador++;
    Serial.print("Contador: ");
    Serial.println(contador);
    delay(200);
  }

  if (currentMillis - lastClap >= TIEMPO_CLAP) {
    actuarLED();
  }

}
