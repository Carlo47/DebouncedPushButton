/**
 * Program      testPushButton.cpp
 * Author       2021-10-06 Charles Geiser (https://www.dodeka.ch)
 * 
 * Purpose      Testprogram for the debounced pushbutton library
 *              Shows how to add callbacks for the events click, longclick and doubleclick
 * 
 * Board        ESP32 DoIt DevKit V1
 *
 * Wiring       Pushbutton connected from input pin to GND
 *
 * Remarks
 *
 * References
 */
#include "PushButton.h"

uint8_t PIN_BUTTON = GPIO_NUM_4;

PushButton btn(PIN_BUTTON);

// Define 3 callback functions
void sayHello()
{
  Serial.printf("%s\n", "Hello, how are you?");
}

void askName()
{
  Serial.printf("%s\n", "What's your name?");
}

void myName()
{
  Serial.printf("%s\n", "My name is Carlo, I'm fine.");
}

void setup() 
{
  Serial.begin(115200);

  // Add the callbacks
  btn.addOnClickCB(sayHello);
  btn.addOnLongClickCB(myName);
  btn.addOnDoubleClickCB(askName);
}

void loop() 
{
  btn.loop();
}