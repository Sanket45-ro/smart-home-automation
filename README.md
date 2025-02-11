# Smart Home Automation System

This project demonstrates a basic Smart Home Automation System using Arduino UNO, push buttons, and an ultrasonic sensor. It allows manual control of lights and fans with push buttons and automatic light control based on proximity detection.

## 🚀 Features
- **Manual Control:** Toggle lights and fans using push buttons.
- **Automatic Light Control:** Lights turn on automatically when someone approaches within 50 cm.
- **Real-time Distance Display:** Monitor distance data via Serial Monitor.

## 🗂️ Components Used
- Arduino UNO
- Ultrasonic Sensor (HC-SR04)
- Push Buttons (x2)
- LEDs (x2 for lights & fans)
- Resistors (220Ω for LEDs, 10kΩ for pull-downs)
- Breadboard & Jumper Wires

## ⚡ Circuit Connections
- **Ultrasonic Sensor (HC-SR04):** VCC → 5V, GND → GND, Trig → Pin 9, Echo → Pin 10
- **Push Buttons:** Connected to Pins 2 & 3 with pull-down resistors
- **LEDs:** Connected to Pins 6 & 7 with 220Ω resistors

## 📝 How to Use
1. Upload the code to your Arduino board.
2. Open the Serial Monitor to view distance readings.
3. Press buttons to toggle devices.
4. Move objects close to the sensor for automatic light control.

## 💡 Future Enhancements
- Integrate with IoT platforms for remote control.
- Add temperature sensors for environmental monitoring.
- Implement mobile app control.

---

**Author:** Sanket Limbaji Saste
