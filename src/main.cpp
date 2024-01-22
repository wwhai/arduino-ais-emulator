#include <Arduino.h>

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  while (!Serial)
  {
    ;
  }
}
// pio run -e uno -t upload --upload-port COM4
void loop()
{
  digitalWrite(13, HIGH);
  Serial.print("$GPRMC,123519,A,4807.038,N,01131.000,E,022.4,084.4,230394,003.1,W*6A\r\n");
  digitalWrite(13, LOW);
  delay(100);
  digitalWrite(13, HIGH);
  Serial.print("!AIVDM,1,1,,A,C6:aq@@0822o1cTHJgb=swhPjbhBL@bOSeeUd0000000S5063TBP,0*5A\r\n");
  digitalWrite(13, LOW);
  delay(100);
  digitalWrite(13, HIGH);
  Serial.print("!AIVDM,1,1,,A,B6:biRh0?B2rD3THa1LWhOv021Mk,0*30\r\n");
  digitalWrite(13, LOW);
  delay(100);
  digitalWrite(13, HIGH);
  Serial.print("!AIVDO,1,1,,A,13Mum40000000G?vMdHG6Hi2>220S0@0,0*67\r\n");
  digitalWrite(13, LOW);
  delay(100);
  digitalWrite(13, HIGH);
  Serial.print("!AIVDM,1,1,,B,C6:aq@@0822o1T4HJfr=OwiPjbhBL@bOSeeUd0000000S5063TBP,0*22\r\n");
  digitalWrite(13, LOW);
  delay(100);
}
