/*

  Pantri PB01 a.k.a:

  --- A Bit Pushy ---

  RELEASE V 1.0.0

  Distributed under GNU General Public License V3

  This sketch tests out the outputs on the A Bit Pushy device only.  You want to use the main repo https://github.com/pantri/A-Bit-Pushy to make it work properly!

*/

#include <ESP8266WiFi.h>

//Declare what pins connect to what bits!

int buzzer = 00;          // This is the pin output leading to your Buzzer
int LED = 12;             // This is the pin output leading to your LED
int successLED = 04;      // This is the pin output leading to your LED
int alertLED = 14;        // This is the pin output leading to the red alert LED
int wifiLED = 15;         // This is the pin output leading to the WIFI activity LED
int wifiSuccessLED = 05;  // This is the pin output leading to the WIFI activity LED
int wifiAlertLED = 13;    // This is the pin output leading to the red WIFI alert  LED


void setup() {
  Serial.begin(115200);

  pinMode(buzzer, OUTPUT);
  pinMode(LED, OUTPUT);
  pinMode(successLED, OUTPUT);
  pinMode(alertLED, OUTPUT);
  pinMode(wifiLED, OUTPUT);
  pinMode(wifiSuccessLED, OUTPUT);
  pinMode(wifiAlertLED, OUTPUT);
  
  Serial.println("");
  outputTest();
  Serial.println("Night!");
  ESP.deepSleep(0);

}

void loop() {

  // Nothing to loop as I'm asleep :)

}

void outputTest() {
  Serial.println("LED Blue");
  digitalWrite(LED, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(250);
  digitalWrite(LED, LOW);
  digitalWrite(buzzer, LOW);
  delay(250);

  Serial.println("LED Green");
  digitalWrite(successLED, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(250);
  digitalWrite(successLED, LOW);
  digitalWrite(buzzer, LOW);
  delay(250);

  Serial.println("LED Red");
  digitalWrite(alertLED, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(250);
  digitalWrite(alertLED, LOW);
  digitalWrite(buzzer, LOW);
  delay(250);

  Serial.println("WiFi LED Blue");
  digitalWrite(wifiLED, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(250);
  digitalWrite(wifiLED, LOW);
  digitalWrite(buzzer, LOW);
  delay(250);

  Serial.println("WiFi LED Green");
  digitalWrite(wifiSuccessLED, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(250);
  digitalWrite(wifiSuccessLED, LOW);
  digitalWrite(buzzer, LOW);
  delay(250);

  Serial.println("WiFi LED Red");
  digitalWrite(wifiAlertLED, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(250);
  digitalWrite(wifiAlertLED, LOW);
  digitalWrite(buzzer, LOW);
  delay(250);
}
