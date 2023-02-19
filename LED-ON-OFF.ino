//Include the library files
#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// Enter your Auth token
char auth[] = " "; //auth token

//Enter your WIFI SSID and password
char ssid[] = " ";  //ssid
char pass[] = " "; //password

void setup(){
  // Debug console
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop(){
  Blynk.run();
}
