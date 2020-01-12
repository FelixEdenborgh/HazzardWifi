#include <ESP8266WiFi.h>

const char* ssid = "IoT";

const char* pass = "IoT2018!";

void setup() {

  Serial.begin(115200);

  WiFi.begin(ssid,pass);

  while(WiFi.status() != WL_CONNECTED) {

    Serial.print(".");

    delay(1000);

  }

  Serial.println("Uppkopplad");

}

void loop() {

}
