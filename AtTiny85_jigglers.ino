// Include the DigiMouse library, which allows the microcontroller to act like a USB mouse
#include "DigiMouse.h"

// This function runs once when the device is first powered on or reset
void setup() {
  // Initialize the DigiMouse functionality so the device is recognized by the computer as a USB mouse
  DigiMouse.begin(); 
}

// This function runs continuously in a loop while the device is powered on
void loop() {
  // Move the mouse cursor 1 unit to the right along the X-axis
  DigiMouse.moveX(1);  

  // Wait for 500 milliseconds (half a second) before performing the next action
  DigiMouse.delay(500);

  // Move the mouse cursor 1 unit to the left along the X-axis
  DigiMouse.moveX(-1); 

  // Wait for another 500 milliseconds before repeating the loop
  DigiMouse.delay(500);
}
