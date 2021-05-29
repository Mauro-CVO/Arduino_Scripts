const int motor0 = 11; // PWM se conecta al pin 1 del puente-H
const int motor1 = 12; // Entrada 2 del puente-H
const int motor2 = 13; // Entrada 7 del puente-H

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); //Iniciamos la comunicacion serial
pinMode(motor1, OUTPUT); 
pinMode(motor2, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(motor0, 255);
  digitalWrite(motor1,HIGH);
  digitalWrite(motor2,LOW);
  delay(5000);
  analogWrite(motor0, 0);
  digitalWrite(motor1,HIGH);
  digitalWrite(motor2,LOW);
}
