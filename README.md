# 🌬️ Smart Air Quality Monitor

An Arduino-based real-time environmental monitoring system that measures air quality in PPM (Parts Per Million), displays the status on an LCD screen, and triggers an automated alert system when pollution levels cross critical thresholds.

---

## ✨ Features
* **Real-time PPM Tracking:** Continuous polling of air quality index via analog sensing.
* **Smart Visual Feedback:** Integrated 16x2 LCD screen displaying live PPM values and a categorical safety status.
* **Instant Serial Monitoring:** Logs data to your computer at a `9600` baud rate.
* **Automated Safety Trigger:** Activates an external indicator (LED, buzzer, or relay) on `Pin 8` if conditions become hazardous.

---

## 📊 Air Quality Thresholds

| PPM Range | Air Status | System Action |
| :--- | :--- | :--- |
| **< 450** | 🟢 Fresh Air | Safe • System Idle |
| **450 – 600** | 🟡 Poor Air | Warning • System Monitor |
| **> 600** | 🔴 Dangerous Air | **Alert Triggered (Pin 8 HIGH)** |

---

## 🛠️ Hardware Requirements

* 💻 **Microcontroller:** Arduino Uno / Nano / Mega
* 📺 **Display:** 16x2 Character LCD (Hitachi HD44780 compatible)
* 👃 **Sensor:** MQ-series Gas/Air Quality Sensor (e.g., MQ-135)
* 🚨 **Actuator:** 5V Buzzer or LED (connected to Pin 8)
* 🔌 **Misc:** 10kΩ Potentiometer (for LCD contrast), Breadboard, and Jumper Wires

---

## 🔌 Circuit Wiring Guide

### 16x2 LCD Display Connections

| LCD Pin | Arduino Pin | Description |
| :--- | :--- | :--- |
| **VSS / VDD / VO** | GND / 5V / Potentiometer Wiper | Power & Contrast |
| **RS** | Pin 12 | Register Select |
| **E** | Pin 11 | Enable |
| **D4** | Pin 5 | Data Bit 4 |
| **D5** | Pin 4 | Data Bit 5 |
| **D6** | Pin 3 | Data Bit 6 |
| **D7** | Pin 2 | Data Bit 7 |
| **A / K** | 5V (via 220Ω resistor) / GND | Backlight Power |

### Sensor & Alert Connections

| Component | Device Pin | Arduino Pin |
| :--- | :--- | :--- |
| **Air Sensor** | AO (Analog Out) | **A0** |
| **LED / Buzzer** | Positive (+) Terminal | **Pin 8** |

---

## 🚀 Quick Start

1. **Set up the hardware:** Wire up your Arduino according to the wiring guide above.
2. **Open the code:** Copy the code into the Arduino IDE.
3. **Upload:** Select your board and port, then click **Upload**.
4. **Monitor:** Open the **Serial Monitor** (`Ctrl + Shift + M`) at **9600 baud** to view real-time logs.
