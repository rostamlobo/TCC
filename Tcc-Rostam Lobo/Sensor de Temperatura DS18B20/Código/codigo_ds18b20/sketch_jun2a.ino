// Rostam Lobo - ctt : rostamlobo.contato@gmail.com
int MQ135 = A0; int led_vermelho =10;int led_azul = 9 ;int led_amarelo = 8; 
void setup() {
  Serial.begin(9600);
} void loop() {
  int valor = analogRead(MQ135);
  Serial.println("LEITURA DO AR MQ135");
  Serial.print(valor);
  Serial.println(" ppm");
  if(valor >= 550){
    digitalWrite(led_vermelho, HIGH);
    digitalWrite(led_azul, LOW);
    digitalWrite(led_amarelo, LOW);
    Serial.println("ALERTA VERMELHO - Acima de 550 ppm");
  }
  else if (valor >= 300 ){
    digitalWrite(led_vermelho, LOW);
    digitalWrite(led_azul, HIGH);
    digitalWrite(led_amarelo, LOW); 
    Serial.println("ALERTA AZUL - Acima de 300 ppm");
  } 
  else{
    digitalWrite(led_vermelho, LOW);
    digitalWrite(led_azul, LOW);
    digitalWrite(led_amarelo, HIGH);
  }
  delay(1000);
}