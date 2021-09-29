#define BLYNK_PRINT Serial
#include <BlynkSimpleEsp8266.h>
#include <ESP8266WiFi.h>

// AUTH_TOKEN
char auth[] = "Ej3cop05NrQJPNgBu5Qpx6R4lzkaMJn0";

// nama dan password WIFI
char ssid[] = "RIANNETWORK";
char pass[] = "10293847";

BlynkTimer timer;

void setup() {
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();
}
