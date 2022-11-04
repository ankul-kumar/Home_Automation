#define BLYNK_TEMPLATE_ID "TMPLqp1ckOCz"
#define BLYNK_DEVICE_NAME "HOME AUTOMATION"
#define BLYNK_AUTH_TOKEN "Zw39ySoP3Rug8QqV63hBlVHIHKJw_2oy"

#define BLINK_PRINT serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


char* ssid = "AnkulKumar";
char* pass = "123456789";

BLYNK_WRITE(V0) {
  int value = param.asInt();
  Serial.println(value);
  if (value == 1) {
    digitalWrite(D1, HIGH );
    Serial.println("LED ON");
  }
  if (value == 0) {
    digitalWrite(D1, LOW);
    Serial.println("LED OFF");
  }
}

BLYNK_WRITE(V1) {
  int value = param.asInt();
  Serial.println(value);
  if (value == 1) {
    digitalWrite(D2, HIGH);
    Serial.println("LED ON");
  }
  if (value == 0) {
    digitalWrite(D2, LOW);
    Serial.println("LED OFF");
  }
}

BLYNK_WRITE(V2) {
  int value = param.asInt();
  Serial.println(value);
  if (value == 1) {
    digitalWrite(D3, HIGH);
    Serial.println("LED ON");
  }
  if (value == 0) {
    digitalWrite(D3, LOW);
    Serial.println("LED OFF");
  }
}

BLYNK_WRITE(V3) {
  int value = param.asInt();
  Serial.println(value);
  if (value == 1) {
    digitalWrite(D4, HIGH);
    Serial.println("LED ON");
  }
  if (value == 0) {
    digitalWrite(D4, LOW);
    Serial.println("LED OFF");
  }
}


void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid,pass);
  Serial.println("Ankul 70");
  while(WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.print(".");

  }
  Serial.println("Ankul 75");
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  BLYNK_WRITE(1);
}
void loop() {
  Blynk.run();
}