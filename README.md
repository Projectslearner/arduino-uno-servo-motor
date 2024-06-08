# Controlling a Servo Motor with a Potentiometer using Arduino

## Description

This project demonstrates how to control a servo motor's position using a potentiometer. The potentiometer's analog input is read by the Arduino, which then maps this value to a corresponding angle for the servo motor. This setup is ideal for projects requiring precise control of a servo motor based on variable resistance input, such as in robotics, remote controls, or adjustable mechanisms.

## Components Needed

1. **Arduino UNO**
2. **Servo Motor**
3. **Potentiometer**
4. **Jumper Wires**
5. **Breadboard**

## Circuit Wiring

1. **Potentiometer:**
   - Connect the **VCC** pin to the **5V** pin on the Arduino.
   - Connect the **GND** pin to the **GND** pin on the Arduino.
   - Connect the **wiper (middle pin)** to the analog pin **A0** on the Arduino.

2. **Servo Motor:**
   - Connect the **signal** pin to the digital pin **9** on the Arduino.
   - Connect the **VCC** pin to the **5V** pin on the Arduino.
   - Connect the **GND** pin to the **GND** pin on the Arduino.

## Instructions

1. **Install the Servo Library:**
   - Ensure the Servo library is included in your Arduino IDE. It usually comes pre-installed with the IDE.

2. **Upload the Code:**
   - Copy and paste the provided code into the Arduino IDE.
   - Verify and upload the code to your Arduino board.

3. **Monitor the Output:**
   - Open the Serial Monitor to view the potentiometer values and the corresponding servo angles in real time.

## Project Operation

- **Initialization:**
  - The Arduino initializes the serial communication at 9600 baud and attaches the servo motor to the specified pin in the `setup()` function.

- **Reading and Mapping Values:**
  - In the `loop()` function, the Arduino reads the analog value from the potentiometer (ranging from 0 to 1023).
  - This value is then mapped to a corresponding angle between 0 and 180 degrees.

- **Controlling the Servo:**
  - The mapped angle is written to the servo motor, adjusting its position accordingly.
  - The potentiometer value and the corresponding servo angle are printed to the Serial Monitor for real-time monitoring.

## Applications

1. **Robotics:** Precise control of robotic arms or joints.
2. **Remote Controls:** Adjusting positions or settings remotely.
3. **Adjustable Mechanisms:** Control mechanisms that require variable positioning, such as camera mounts or valves.

---

### Whether you're working on electronics projects, IoT applications, or robotics innovations, Projects Learner is your go-to platform for guidance and expertise.

🌐 [projectslearner.com](https://www.projectslearner.com)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

## Made for you with ❣️ from ProjectsLearner