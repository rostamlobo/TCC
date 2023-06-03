// Rostam Lobo - ctt : rostamlobo.contato@gmail.com
// lembre de baixar a biblioteda one wire para poder rodar o  projeto (https://lastminuteengineers.com/ds18b20-arduino-tutorial/)
#include <OneWire.h>
#include <DallasTemperature.h>
OneWire pino(3);
DallasTemperature barramento(&pino);
DeviceAddress sensor;
void setup(void)
{
  Serial.begin(9600);
  barramento.begin();
  barramento.getAddress(sensor, 0);  
}
void loop()
{
  barramento.requestTemperatures(); 
  float temperatura = barramento.getTempC(sensor);
  Serial.println(temperatura);
  delay(500);
}
