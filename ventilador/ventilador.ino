const int motor0 = 11; // PWM se conecta al pin 1 del puente-H
const int motor1 = 12; // Entrada 2 del puente-H
const int motor2 = 13; // Entrada 7 del puente-H
const int boton = 4;
int pot = 1;
int servo_pin = 2;
int pulso_min = 700;
int pulso_max = 2300;
int valor_pot;
int angulo;
int estado = 0;
int salida = 0;
#include <Servo.h>

Servo servo1;
void setup() {
Serial.begin(9600); //Iniciamos la comunicacion serial
pinMode(motor1, OUTPUT); 
pinMode(motor2, OUTPUT); 
Serial.println("Para seleccionar la velocidad del motor (0-9). Para seleccionar la direccion introduce + o -"); //Imprime en la consola puerto serie
//pinMode(led_izq, OUTPUT);
//pinMode(led_der, OUTPUT);
servo1.attach(servo_pin, pulso_min,pulso_max);
pinMode(boton,INPUT);

}
 
void loop() {  
  digitalWrite(motor1,HIGH);
  digitalWrite(motor2,LOW);
  estado = digitalRead(boton);
  valor_pot = analogRead(pot);
  angulo = map(valor_pot,0,1023,0,180);
  servo1.write(angulo);
  delay(30);
  
  if (estado == HIGH){
    salida = 1 -salida;}
    if (salida == 1) {
    analogWrite(motor0, 255);
    } else{
      analogWrite(motor0, 0);
      //digitalWrite(motor1,LOW);
      //digitalWrite(motor2,HIGH);
      }
    }

  /*
  if ( Serial.available()) { //Comprobamos que el puerto serial esta disponible para la comunicacion
    char ch = Serial.read(); //Leemos las variables que introducimos desde el teclado por el monitor serial
    if(ch >= '0' && ch <= '9') {
      int speed = map(ch, '0', '9', 0, 255); // Adaptamos el numero a una escala de 0 a 255
      analogWrite(motor0, speed);
      Serial.println("El valor de velocidad intruducido es:");
      Serial.println(speed); //Escribe el valor analogico PWM enPin
    }
    else if (ch == '+') {
      Serial.println("Girando en sentido horario...");
      digitalWrite(motor1,LOW);
      digitalWrite(motor2,HIGH);
    }
    else if (ch == '-') { 
      Serial.println("Girando en sentido anti-horario...");
      digitalWrite(motor1,HIGH);
      digitalWrite(motor2,LOW);
    }
    //else {
    //  Serial.print("Caracter no reconocido. Error.");
    //  Serial.println(ch);
    //}
   
   }
}*/
