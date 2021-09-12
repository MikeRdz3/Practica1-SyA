float v = 0.0;
float T = 0.0;
void setup() {
  pinMode(A0,INPUT);
  Serial.begin(9600);

}

void loop() {
  v = analogRead(A0);
  //JOSE MIGUEL RODRIGUEZ ZENTENO = 26 por lo tanto Tmax=26(5)=130°C
  T= float((v*130)/1023);
  Serial.print("La temperatura actual es: ");
  Serial.print(T);
  Serial.println("C");
  delay(1000);

}
