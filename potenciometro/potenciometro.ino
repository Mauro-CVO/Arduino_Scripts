int pot = 1;
int valor_pot;
int led = 3;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  valor_pot = analogRead(pot);
  analogWrite(led,map(valor_pot,0,1023,0,255));
  delay(30);
}
