// Arduino Header File
#include "Arduino.h"

//Configure Cabin Lights PIN OUT Constant
#define CABIN_LIGHTS_PIN 12


void setup() {
  //Set cabin lights pin as output to illuminate ship
  pinMode(CABIN_LIGHTS_PIN, OUTPUT);
}

void loop() {
  digitalWrite(CABIN_LIGHTS_PIN, HIGH);
  delay(1000);
  digitalWrite(CABIN_LIGHTS_PIN, LOW);
  delay(100);

}
