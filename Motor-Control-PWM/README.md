# DC Motor Speed Control with PWM

## Overview
Arduino-based system for precise DC motor speed control using Pulse Width Modulation (PWM). This project demonstrates variable speed control principles used in industrial automation and robotics applications.

## Components Used
- Arduino Uno
- L298N Motor Driver Module
- DC Motor
- 9V Power Supply
- Potentiometer (for manual speed adjustment)
- Jumper Wires
- Breadboard

## Circuit Configuration
- PWM output from Arduino (Pin 9) connected to motor driver 
- Potentiometer connected to analog input (A0) for speed control
- L298N driver handles higher current requirements of the motor

## Project Simulation
This project was simulated using Proteus 8.0 simulation software to validate circuit design and control algorithms before physical implementation.

## Code Highlights
```cpp
// Motor speed is controlled by adjusting the duty cycle of the PWM signal
analogWrite(motorPin, speed); // Speed value ranges from 0-255
