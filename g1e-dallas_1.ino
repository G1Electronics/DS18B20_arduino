
#include <OneWire.h>
#include <DallasTemperature.h>

DeviceAddress Term = { 0x28, 0xFF, 0x64, 0xA9, 0x90, 0x15, 0x01, 0x19 };

OneWire oneWire(10);
DallasTemperature sensors(&oneWire);


void setup(void)
{
  Serial.begin(9600);
  sensors.begin();
}


void loop(void)
{ 
  sensors.requestTemperatures();

  Serial.println("New loop");
  Serial.println(sensors.getTempC(Term));
  
  delay (1000);
}

