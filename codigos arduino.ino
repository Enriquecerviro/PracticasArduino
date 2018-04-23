  
  //Practica numero 1
  void setup(){
  pinMode(13, OUTPUT);}
  void loop(){
  digitalWrite(13, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
 }

//Practica numero 2
void setup() {
// initialize the digital pin as an output.
for ( int i = 11 ; i <= 13 ; i++)
{
pinMode(i, OUTPUT);
}
}
// the loop routine runs over and over again forever:
void loop() {
for (int i=11 ; i <= 13 ; i++)
{
digitalWrite( i , HIGH) ;
delay (200) ;
digitalWrite( i , LOW);
delay (200) ;
}
}

//Practica numero 3
>#include <Servo.h> // Incluir la librería Servo
Servo servo1; // Crear un objeto tipo Servo llamado servo1
int angulo = 0 ;
int pin=9;
void setup() {
servo1.attach(pin) ; // Conectar servo1 al pin 9
}
void loop() {
for(angulo = 0; angulo <= 180; angulo += 1) //incrementa angulo 1 grado {
servo1.write(angulo);
delay(25);
}
for(angulo = 180; angulo >=0; angulo -=1 ) //decrementa angulo 1 grado {
servo1.write( angulo );
delay(25);
}
}