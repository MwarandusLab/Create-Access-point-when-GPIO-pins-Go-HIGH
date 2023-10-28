#include <ESP8266WiFi.h>

const char* ssid = "DIY DEV BOARD"; // Access point name
const char* password = "ESP8266"; // Access point password

void setup() {
  pinMode(2, INPUT_PULLUP); // Set GPIO2 as input with pull-up resistor
  WiFi.mode(WIFI_OFF); // Turn off WiFi to start with
}

void loop() {
  int gpio2Status = digitalRead(2); // Read GPIO2 status

  if (gpio2Status == HIGH) {
    // GPIO2 is HIGH, so create access point
    WiFi.mode(WIFI_AP);
    WiFi.softAP(ssid, password);
  } else {
    // GPIO2 is LOW, so turn off access point
    WiFi.softAPdisconnect();
    WiFi.mode(WIFI_OFF);
  }

  delay(100); // Add a small delay to prevent rapid switching
}



