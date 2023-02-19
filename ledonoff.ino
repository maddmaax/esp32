//Include the library files
#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// Enter your Auth token
char auth[] = "WtNYPWHQ7ymhp81a9h-UpW5ayswO4ccY";

//Enter your WIFI SSID and password
char ssid[] = "PLDTHOMEFIBRKpCy2";  
char pass[] = "PLDTWIFIRxMtU"; 

void setup(){
  // Debug console
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop(){
  Blynk.run();
}