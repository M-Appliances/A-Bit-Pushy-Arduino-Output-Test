/*

  Pantri PB01 a.k.a:

  --- A Bit Pushy ---

  RELEASE V 1.0.0

  Distributed under GNU General Public License V3

  This sketch tests out the outputs on the A Bit Pushy device only.  You want to use the main repo https://github.com/pantri/A-Bit-Pushy to make it work properly!

*/

#include <ESP8266WiFi.h>

//Declare what pins connect to what bits!

int buzzer = 14;          // This is the pin output leading to your Buzzer
int LED = 13;             // This is the pin output leading to your LED
int successLED = 15;      // This is the pin output leading to your LED
int alertLED = 12;        // This is the pin output leading to the red alert LED


void setup() {
  Serial.begin(115200);

  pinMode(buzzer, OUTPUT);
  pinMode(LED, OUTPUT);
  pinMode(successLED, OUTPUT);
  pinMode(alertLED, OUTPUT);

  Serial.println("");
  outputTest();
  outputTest();
  outputTest();
  outputTest();
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
}
