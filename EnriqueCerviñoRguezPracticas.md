# Enrique Cerviño Rguez

![N|Solid](https://cdn.arduino.cc/homepage/static/media/arduino-UNO.bcc69bde.png)

Lo que vamos a hacer es proceder a explicar nuesta primera experiencia trasteando con Arduino; hemos utilizado la página tinkercad.com para simular el sistema arduino, los elementos que hemos utilizado son;

| Elemento | Descripción |
| ------ | ------ |
| Arduino Uno R3 | Sistema base |
| LED*4. | Luces de colores |
| Piezo (buzzer). | Dispositivo piezoeléctrico que emite sonido |
| Servomotor | Helice que permite movimiento |

### Practica 1
En esta pequeña introducción vamos a hacer uso de una placa arduino y un led, y vamos a encender/apagarlo en un intervalo de tiempo que nosotros definimos para que de la sensacion de que esta apagandose o encenciendose.
  - Primero necesitamos una placa arduino uno, la insertamos y tb insertamos un protoboard (breadboard).
  - Segundo vamos a introducir el led, lo colocaremos en la protoboard; en la ranura 'e', el numero lo vamos a dejar a nuestro gusto.
  - Tercero y ultimo vamos a conectar el led del proto a la placa arduino; para ello vamos a unir el GND al cátodo y la ranuda d13 al ánodo. Y para finalizar necesitamos copiar el siguiente código:
 > void setup(){
 > pinMode(13, OUTPUT);}
 > void loop(){
 > digitalWrite(13, HIGH);
 > delay(2000); // Wait for 1000 millisecond(s)
 > digitalWrite(13, LOW);
 > delay(1000); // Wait for 1000 millisecond(s)
 >}

Ahora si tenemos nuestra luz parpadeando y nuestro primer experimento en funcionamiento.


### Practica 2
En esta segunda practica va a ser lo mismo que la primera salvo que vamos a utilizar 3 leds de colores haciendo que vayan encendiendose/apagandose uno detrás de otro.
- Primero colocamos los tres leds en la posicion d del proto y en paralelo,quedando los numeros a nuestro antojo.
- Segundo vamos a elegir 3 pines de i/o para conectarlos a los ánodos, luego el GND lo conectamos al polo negativo y unimos el polo negativo del catodo a la ranura del catodo correspondiente.
- Por ultimo copiamos el codigo y runrunrun!!!
>// the setup routine runs once when you press reset:
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


### Practica 3
En esta practica vamos a añadir un dispositivo de sonido llamado buzzer.

- Seguimos los mismo pasos que la anterior practica y la unica diferencia es que vamos añadir el buzzer en la ranura e y conectamos el negativo a su positivo y voilá!


### Practica 4
En esta vamos a utilizar un servomotor.
- Para ello vamos a concectar el ping de i/o, el de voltaje y el GND, introducimos el siguiente codigo y listo:
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
>
## Conclusiones
Con estas pequeñas practicas nos hemos introcido en como funciona el sistema arduino, se podría decir que ya estamos preparados para embarcarnos en el siguiente proyecto medianamente serio, que será construir nuestra pequeña Base Meteorológica, seguid atentos!!



