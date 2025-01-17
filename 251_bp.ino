// ESP32 will make post requests to server on local network
// ESP32 has to be on same network

//  including libraries
#include<WiFi.h>

//  wifi credentials
const char ssid[] = "your ssid";
const char password[] = "your password";

//  potpin on GPIO 34
const int potpin = 34;

void setup()
{
  Serial.begin(115200);

  //  connecting to wifi
  Serial.print("Connecting to : ");
  Serial.println(ssid);
  WiFi.begin(ssid , password);
  while (WiFi.status()  !=  WL_CONNECTED)
  {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.println("Connected with Wifi !");
}

void loop()
{
  int p_meter = analogRead(potpin,34)
  Serial.print("Potentiometer Value is : ", p_meter)
  delay(1000)
  //  reading potentiometer at an interval of 1 sec

}
