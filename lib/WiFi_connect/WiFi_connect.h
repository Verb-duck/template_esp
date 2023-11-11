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
void OTA_setup(const char* mqtt_ota_update);  /*подключение обновления по WiFi. 
      Вставить в блок setup */
void OTA_update();
bool WiFi_Connected();   /* подключение в ВиФи
    true - есть связь
    false - нет связи*/
#endif