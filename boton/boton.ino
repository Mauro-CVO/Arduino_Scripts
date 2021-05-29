const int boton = 4;
int led = 2;
int estado = 0;
int salida = 0;

void setup() {
  Serial.begin(9600);
  pinMode(boton,INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (estado == HIGH){
    salida = 1 -salida;}
    if (salida == 1) {
    digitalWrite(led, HIGH);
    } else{
      digitalWrite(led, LOW);
      }
    
}
