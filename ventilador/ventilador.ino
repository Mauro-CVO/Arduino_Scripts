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

 
