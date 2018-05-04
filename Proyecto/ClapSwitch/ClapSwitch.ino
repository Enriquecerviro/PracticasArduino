const int umbral = 25;
bool led = false;

void setup() {
  Serial.begin(9600);
  analogReference(INTERNAL);
  
}
bool micro(){
  int n = analogRead(0);
  if(n >= umbral){
    led = true;
  }
  return false;
}

void loop() {
  if(micro()){
    led = !led;
    digitalWrite(2,led);
    delay(200);
  }
  

}
