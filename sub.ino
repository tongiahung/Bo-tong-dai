#include <Wire.h>
#include <SHT1x.h>
#define DTPin_SHT 10  // data pin cam bien nhiet do
#define CKPin_SHT 11 // CK pin cam bien nhiet do
#define buzzer 2
SHT1x sht1x(DTPin_SHT10, CKPin_SHT10);
#define sub_id 6;
float temp;
void setup() {
  Wire.begin(sub_id); 
  Wire.onReceive(receiveEvent); 
}

void loop() {
  temp = sht1x.readTemperatureC();
}
