#include <Servo.h>
Servo servo1;
int servo_pin = 2;
int pulso_min = 700;
int pulso_max = 2300;
int valor_pot;
int angulo;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //Iniciamos la comunicacion serial
  servo1.attach(servo_pin, pulso_min,pulso_max);
}

void loop() {
  // put your main code here, to run repeatedly:
  servo1.write(0);
  delay(2000);
  servo1.write(90);
  delay(2000);
  servo1.write(180);
  delay(2000);
}
