/*
    Project name : Arduino Uno Servo Motor Control
    Modified Date: 29-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-servo-motor
*/

#include <Servo.h>

Servo myservo;  // Create a servo object
int pos = 0;    // Variable to store servo position

void setup() {
  myservo.attach(9);  // Attach the servo to digital pin 9
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Sweep the servo from 0 to 180 degrees
  for (pos = 0; pos <= 180; pos += 1) {
    myservo.write(pos);  // Set servo position
    Serial.print("Servo position: ");
    Serial.println(pos); // Print servo position to Serial Monitor
    delay(15);           // Delay for smooth movement
  }
  
  // Sweep the servo from 180 to 0 degrees
  for (pos = 180; pos >= 0; pos -= 1) {
    myservo.write(pos);  // Set servo position
    Serial.print("Servo position: ");
    Serial.println(pos); // Print servo position to Serial Monitor
    delay(15);           // Delay for smooth movement
  }
}
