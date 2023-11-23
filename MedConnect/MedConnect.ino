#include "ArduinoJson.h"
#include "EspMQTTClient.h"
// MQTT Configuracoes
EspMQTTClient client{
  "Wokwi-GUEST", //SSID do WiFi
  "",     // Senha do wifi
  "mqtt.tago.io",  // Endereço do servidor
  "Default",       // Usuario
  "a2ec45ff-2aa2-4019-bf04-dd2125dcf3e7",         // Token do device
  "MedConnect",           // Nome do device
  1883             // Porta de comunicação
};
void setup() {
  randomSeed(analogRead(0));
  Serial.begin(9600);
  Serial.println("Conectando WiFi");
  while (!client.isWifiConnected()) {
    Serial.print('.'); client.loop(); delay(1000);
  }
  Serial.println("WiFi Conectado");
  Serial.println("Conectando com Servidor MQTT");
  while (!client.isMqttConnected()) {
    Serial.print('.'); client.loop(); delay(1000);
  }
  Serial.println("MQTT Conectado");
}
// Callback da EspMQTTClient
void onConnectionEstablished()
{}

char bpm[100];
void loop() {
  // Gerar e imprimir um valor simulado
  int bpm_simulado = random(0, 200); // simular valor entre 0 e 199
  Serial.print("Batimentos por minuto: ");
  Serial.println(bpm_simulado);

  StaticJsonDocument<300> bpmJson; 
  bpmJson["variable"] = "BPM";
  bpmJson["value"] = bpm_simulado;

  serializeJson(bpmJson, bpm);

  // Enviando o JSON serializado para o tópico "Pulso"
  client.publish("BPM", bpm);

  // Aguardar 1 segundo entre cada iteração
  delay(5000);

  // Executar o loop do cliente MQTT
  client.loop();
}