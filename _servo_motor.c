/*
    Code by : Projects_learner
    Project name : Servo motor using Ardino UNO
    Modified Date : 07-06-2024
    Website : https://projectslearner.com/learn/arduino-uno-servo-motor
*/

#include <Servo.h>

// Define pin for the potentiometer and the servo
const int potPin = A0; // Potentiometer connected to analog pin A0
const int servoPin = 9; // Servo connected to digital pin 9

// Create a Servo object to control the servo
Servo myServo;

void setup() 
{
    // Initialize serial communication at 9600 bits per second
    Serial.begin(9600);
    
    // Attach the servo to the specified pin
    myServo.attach(servoPin);
}

void loop() 
{
    // Read the value from the potentiometer (0 to 1023)
    int potValue = analogRead(potPin);

    // Map the potentiometer value to an angle between 0 and 180 degrees
    int angle = map(potValue, 0, 1023, 0, 180);

    // Write the angle to the servo
    myServo.write(angle);

    // Print the potentiometer value and the corresponding servo angle to the serial monitor
    Serial.print("Potentiometer Value: ");
    Serial.print(potValue);
    Serial.print(" -> Servo Angle: ");
    Serial.println(angle);

    // Brief delay to prevent excessive rapid updates
    delay(15);
}
