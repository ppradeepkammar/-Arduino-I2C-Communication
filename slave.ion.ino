#include <Wire.h>

void setup()
{
  Wire.begin(8);             // Arduino as Slave, address 8
  Wire.onReceive(receiveData);

  Serial.begin(9600);
}

void loop()
{
  delay(100);
}

void receiveData(int bytes)
{
  Serial.print("Received: ");

  while (Wire.available())
  {
    char data = Wire.read();
    Serial.print(data);
  }

  Serial.println();
}