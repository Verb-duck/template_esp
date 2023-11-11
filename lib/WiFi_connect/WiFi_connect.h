#ifndef WiFi_connect_h
#define WiFi_connect_h
#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <ESP8266mDNS.h>
#include <ArduinoOTA.h>
#include "WiFi_connect.h"       //ota WiFi
#include <ESP8266httpUpdate.h>

#define ssid "5G OBLUCHATEL"
#define passwordW "00000000"
bool WiFi_Connected();       // подключение в ВиФи    
void begin_OTA_WiFi_to_IP(); // обновление по ВиФи по IP
void OTA_begin(const char *mqtt_ota_update);// обновление прошивки, все в одном месте
void OTA_update();           // обновление по ВиФи по IP


#endif