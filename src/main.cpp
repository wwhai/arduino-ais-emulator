#include <Arduino.h>

void setup()
{
  Serial.begin(9600);
}
// pio run -e uno -t upload --upload-port COM4
void loop()
{
  Serial.print("!AIVDO,1,1,,,B00000001:2q8UTHSQ003wi4p6jp,0*69\n\r");
  delay(100);
  Serial.print("!AIVDM,1,1,,A,C6:aq@@0822o1cTHJgb=swhPjbhBL@bOSeeUd0000000S5063TBP,0*5A\n\r");
  delay(100);
  Serial.print("!AIVDO,1,1,,,B00000001:2q8V4HSQ403wiTp6jp,0*6E\n\r");
  delay(100);
  Serial.print("!AIVDO,1,1,,,B00000000r2q8VTHSQ403wj4p6jp,0*24\n\r");
  delay(100);
  Serial.print("!AIVDM,1,1,,A,B6:cll000:2m4t4HAuR;Cwv41P06,0*2E\n\r");
  delay(100);
  Serial.print("!AIVDM,1,1,,B,B6:biRh0?B2rD3THa1LWhOv021Mk,0*33\n\r");
  delay(100);
  Serial.print("!AIVDM,1,1,,B,C6:aq@@0822o1T4HJfr=OwiPjbhBL@bOSeeUd0000000S5063TBP,0*22\n\r");
  delay(100);
  Serial.print("!AIVDM,1,1,,A,B6:biRh0?B2rD3THa1LWhOv021Mk,0*30\n\r");
  delay(100);
  Serial.print("!AIVDM,1,1,,B,B6:VeE@0:b2pWm4HSkNB3wh6sP06,0*3A\n\r");
  delay(100);
  Serial.print("!AIVDO,1,1,,,B00000001:2q8W4HSQ403wjTp6jp,0*6C\n\r");
  delay(100);
  Serial.print("!AIVDM,1,1,,B,16:Wu9i00L`;MQfAQkFq1o?p0000,0*5A\n\r");
  delay(100);
}
