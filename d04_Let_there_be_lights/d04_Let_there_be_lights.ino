// Arduino Header File
#include "Arduino.h"

//Configure PIN OUT Constants
const byte CABIN_LIGHTS_PIN = 10;
const byte STORAGE_LIGHTS_PIN = 11;
const byte COCKPIT_LIGHTS_PIN = 12;

//Configure PIN IN Constants
const byte CABIN_LIGHT_SWITCH_PIN = 2;
const byte STORAGE_LIGHT_SWITCH_PIN = 3;
const byte COCKPIT_LIGHT_SWITCH_PIN = 4;


void setup() {
  //Pin outputs for power to lights
  pinMode(CABIN_LIGHTS_PIN, OUTPUT);
  pinMode(STORAGE_LIGHTS_PIN, OUTPUT);
  pinMode(COCKPIT_LIGHTS_PIN, OUTPUT);
  //Set light switch pins as output to control light power
  pinMode(CABIN_LIGHT_SWITCH_PIN, INPUT);
  pinMode(STORAGE_LIGHT_SWITCH_PIN, INPUT);
  pinMode(COCKPIT_LIGHT_SWITCH_PIN, INPUT);
}

void loop() {

  //Direct biding of Input DR to Output DW

  digitalWrite(CABIN_LIGHTS_PIN, digitalRead(CABIN_LIGHT_SWITCH_PIN));
  digitalWrite(STORAGE_LIGHTS_PIN, digitalRead(STORAGE_LIGHT_SWITCH_PIN));
  digitalWrite(COCKPIT_LIGHTS_PIN, digitalRead(COCKPIT_LIGHT_SWITCH_PIN));

}
