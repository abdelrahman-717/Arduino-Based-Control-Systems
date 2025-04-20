# Home Automation System via Bluetooth

## Overview
An Arduino-based Bluetooth control system that allows remote switching of devices (represented by LEDs) using a smartphone. This project simulates a smart home environment, showcasing wireless control of appliances via the HC-05 Bluetooth module.

## Components Used
- Arduino Uno
- HC-05 Bluetooth Module
- LEDs (Red, Green, Blue – representing home appliances)
- 220Ω Resistors
- Jumper Wires
- Breadboard

## Circuit Configuration
- HC-05 TX to Arduino Pin 10 (Software RX)  
- HC-05 RX to Arduino Pin 11 (Software TX) *(via voltage divider or level shifter)*
- Red LED to Pin 6  
- Blue LED to Pin 5  
- Green LED to Pin 4  

All LEDs are grounded through resistors.

## Working Principle
- Bluetooth module receives characters from a mobile app (e.g., '1', '2', '3', '0')
- Arduino reads and interprets commands to control LED states
- Each LED represents a different home appliance
- Sends feedback messages back to the app (e.g., "GREEN ON", "LEDS OFF")

## Bluetooth Command List
| Command | Action         |
|---------|----------------|
|   '1'   | Turn on Green LED |
|   '2'   | Turn on Blue LED  |
|   '3'   | Turn on Red LED   |
|   '0'   | Turn off all LEDs |

## Code Highlights
```cpp
#include <SoftwareSerial.h>

SoftwareSerial bluetooth(10, 11);
...
if (Bluetooth_Data == '1') {
  digitalWrite(led_grn, HIGH);
  bluetooth.println("GREEN ON");
}
```

## Simulation
This project was tested using **Proteus 8.0**, ensuring the system works as expected before real hardware implementation.

## Learning Outcomes
- Implementation of Bluetooth serial communication using `SoftwareSerial`
- Command parsing and real-time control using Arduino
- Feedback systems for interactive IoT applications
- Principles of embedded wireless control and home automation
