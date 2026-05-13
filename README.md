# LED-ON-OFF-using-Tactile-Switch
# LED ON/OFF Control using Tactile Switch

---

##  Project Overview

This project demonstrates how to control an **LED using a tactile push button switch** with an Arduino microcontroller.

The tactile switch acts as a **digital input device**, allowing the user to manually turn an LED **ON** or **OFF**.
This project introduces beginners to **digital input reading**, **GPIO control**, and **basic hardware interfacing**.

---

##  Hardware Requirements

* Arduino UNO / Nano / Mega
* Tactile Push Button Switch
* LED
* 220Ω Current Limiting Resistor
* Breadboard
* Connecting Wires
* USB Cable

---

##  Software Requirements

* Arduino IDE
* USB Driver (if required)

---

##  Circuit Connections

| Component       | Arduino Pin         |
| --------------- | ------------------- |
| Tactile Switch  | Digital Pin 6       |
| LED Anode (+)   | Digital Pin 7       |
| LED Cathode (−) | 220Ω Resistor → GND |

---

##  Working Principle

1. The tactile switch is configured as a **digital input**.
2. The LED is configured as a **digital output**.
3. When the button is pressed:

   * Arduino reads HIGH logic.
   * LED turns ON.
4. When the button is released:

   * Arduino reads LOW logic.
   * LED turns OFF.
5. Serial Monitor displays button state continuously.

---

##  Project Structure

```
led-on-off-using-tactile-switch/
│
├── led_switch.ino     # Arduino source code
├── README.md          # Project documentation
```

---

##  Expected Output

* Press Button → **LED ON**
* Release Button → **LED OFF**
* Button status printed on Serial Monitor

---

##  Learning Outcomes

* Understanding Digital Input and Output
* Reading Switch States
* LED Interfacing with Arduino
* Basic Embedded Programming Concepts

---

##

---
