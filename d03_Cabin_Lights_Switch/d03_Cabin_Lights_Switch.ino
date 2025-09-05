// Arduino Header File
#include "Arduino.h"

//Configure PIN OUT Constants
#define CABIN_LIGHTS_PIN 12

//Configure PIN IN Constants
#define CABIN_LIGHT_SWITCH_PIN 2


void setup() {
  //Set cabin lights pin as output to power lights
  pinMode(CABIN_LIGHTS_PIN, OUTPUT);
  //Set cabin light switch pin as output to control light power
  pinMode(CABIN_LIGHT_SWITCH_PIN, INPUT);
}

void loop() {

/*
  if ( digitalRead(CABIN_LIGHT_SWITCH_PIN) == HIGH ) {
    digitalWrite(CABIN_LIGHTS_PIN, HIGH);
  } else {
    digitalWrite(CABIN_LIGHTS_PIN, LOW);
  }
*/

/*
  byte switch_state = digitalRead(CABIN_LIGHT_SWITCH_PIN);
  digitalWrite(CABIN_LIGHTS_PIN, switch_state);
*/

  //Direct biding of Input DR to Output DW

  digitalWrite(CABIN_LIGHTS_PIN, digitalRead(CABIN_LIGHT_SWITCH_PIN));

}
