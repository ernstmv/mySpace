#include <WiFi.h>
// #include <WiFiClient.h>
// #include <WiFiAP.h>

const char* ssid="LAB_MASTER";
const char* password="12345678";
const char*  host ="192.168.4.1";

const int LM35pin=34;

void setup(){
    Serial.begin(115200);
    WiFi.begin(ssid, password);
    while (WiFi.status()!= WL_CONNECTED) {
        delay(500);
        Serial.println("Connecting...");
    }
    Serial.println("WiFi connected");
}

float leerTemperaturaLM35(){
    int valorADC=analogRead(LM35pin);
    return valorADC;
}


void loop(){
    WiFiClient client;
    if(client.connect(host, 80)){
      float temperatura=leerTemperaturaLM35();
        temperatura=(5.0*temperatura *100.0/4096);
        client.println(String(temperatura)+"NICOLAS FRANK EFRAIN");

        String response = client.readStringUntil('\n');
        Serial.println("Respuesta del servidor "+response);

        delay(2000);
    }

}
