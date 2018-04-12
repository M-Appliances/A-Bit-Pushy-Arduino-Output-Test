/*

  Pantri PB01 a.k.a:

  --- A Bit Pushy ---

  RELEASE V 1.0.2

  - V 1.0.1 - Minor comment alterations
  - V 1.0.2 - Mac Address Added & output slowed to make more legible

  Distributed under GNU General Public License V3

  This sketch tests out the outputs on the A Bit Pushy device only.  You want to use the main repo https://github.com/pantri/A-Bit-Pushy to make it work properly!

*/

#include <ESP8266WiFi.h>

//Declare what pins connect to what bits!

int buzzer = 14;          // This is the pin output leading to your Buzzer
int LED = 13;             // This is the pin output leading to your blue status LED
int successLED = 12;      // This is the pin output leading to your green success LED
int alertLED = 15;        // This is the pin output leading to the red alert LED

byte mac[6];

void setup() {
  Serial.begin(115200);

  pinMode(buzzer, OUTPUT);
  pinMode(LED, OUTPUT);
  pinMode(successLED, OUTPUT);
  pinMode(alertLED, OUTPUT);

  WiFi.macAddress(mac);
  
  Serial.println("");
  macOutput();
  outputTest();
  outputTest();
  outputTest();
  outputTest();
  outputTest();
  
  Serial.println("Going to sleep now.");
  ESP.deepSleep(0);

}

void loop() {

  // Nothing to loop as I'm asleep :)

}

void outputTest() { 
  Serial.println("LED Blue");
  digitalWrite(LED, HIGH);
  digitalWrite(buzzer, LOW);
  delay(2000);
  digitalWrite(LED, LOW);
  digitalWrite(buzzer, HIGH);
  delay(500);

  Serial.println("LED Green");
  digitalWrite(successLED, HIGH);
  digitalWrite(buzzer, LOW);
  delay(2000);
  digitalWrite(successLED, LOW);
  digitalWrite(buzzer, HIGH);
  delay(500);

  Serial.println("LED Red");
  digitalWrite(alertLED, HIGH);
  digitalWrite(buzzer, LOW);
  delay(2000);
  digitalWrite(alertLED, LOW);
  digitalWrite(buzzer, HIGH);
  delay(1500);

  Serial.println("--------");
  digitalWrite(buzzer, LOW);
}

void macOutput() {
  Serial.print("MAC: ");
  Serial.print(mac[5],HEX);
  Serial.print(":");
  Serial.print(mac[4],HEX);
  Serial.print(":");
  Serial.print(mac[3],HEX);
  Serial.print(":");
  Serial.print(mac[2],HEX);
  Serial.print(":");
  Serial.print(mac[1],HEX);
  Serial.print(":");
  Serial.println(mac[0],HEX);
}

