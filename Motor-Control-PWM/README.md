
# 💡 DC Motor Speed and Direction Control using Arduino and PWM

## 🧠 Overview
This project demonstrates how to control the **speed and direction of a DC motor** using an Arduino Uno, an **L293D motor driver**, and a potentiometer. The direction is toggled via a push-button, while speed is adjusted using **Pulse Width Modulation (PWM)** based on analog input from a potentiometer. The full circuit was simulated using **Proteus 8.0**.

## 🧰 Components Used
- Arduino Uno  
- L293D Motor Driver IC  
- DC Motor  
- Potentiometer (for speed control)  
- Push Button Switch (for direction control)  
- Resistors (2x 220Ω)  
- Breadboard and Jumper Wires  
- External Power Supply (for the motor, e.g. 12V)

## ⚡ Circuit Configuration
| Component | Arduino Pin | Description |
|----------|-------------|-------------|
| Potentiometer (RV1) | A0 | Analog input to control motor speed |
| Motor Direction 1 (IN1) | 13 | Controls motor direction (L293D IN1) |
| Motor Direction 2 (IN2) | 12 | Controls motor direction (L293D IN2) |
| Motor Enable (ENA) | 10 | PWM control for motor speed (L293D EN1) |
| Direction Switch | 0 (D0) | Toggles motor direction |
| Motor Output | L293D OUT1 & OUT2 | Connected to motor terminals |
| L293D Power | VS = Motor Voltage (e.g., 12V), VSS = 5V from Arduino |

> 🧠 The L293D is used to drive the motor in both directions and handle higher current loads. The Arduino controls speed with PWM and direction via digital pins.

## 🧪 Project Simulation (Proteus)
The complete circuit was designed and tested in **Proteus 8.0** before hardware implementation. Below is the screenshot of the simulated setup:

![Proteus Simulation](circuit-diagram.png)

> 🧪 *The simulation validated the motor behavior when adjusting the potentiometer and toggling the switch.*

## 🧾 Code Snippet
```cpp
int dir1 = 13;
int dir2 = 12;
int Switch = 0;
int speed;
int potPin = A0;
int motorPin = 10;

void setup() {
  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT);
  pinMode(Switch, INPUT);
}

void loop() {
  if (digitalRead(Switch) == HIGH) {
    digitalWrite(dir1, HIGH);
    digitalWrite(dir2, LOW);
  } else {
    digitalWrite(dir1, LOW);
    digitalWrite(dir2, HIGH);
  }

  speed = analogRead(potPin) / 4;
  analogWrite(motorPin, speed);
  delay(20);
}
```

## 📦 Libraries Used
- **None** — All functions used are part of the **default Arduino core library**.
