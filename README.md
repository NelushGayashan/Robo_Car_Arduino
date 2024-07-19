# Robo Car Arduino Project

## Overview
The Robo Car Arduino project is a prototype for a line-following gripper robot designed to transport materials within a factory setting. The robot is equipped with various sensors and actuators to navigate, detect obstacles, and interact with its environment.

## Components
- **IR Sensor Array**: 6 TCRT5000 sensors for line following.
- **Ultrasonic Sensor**: HCSR04 for distance measurement.
- **DC Gear Motors**: 4 DC motors to control the wheels.
- **Motor Controller**: L293D IC for motor control.
- **Stepper Motor**: SG90 for controlling the gripper.
- **Microcontroller**: ATmega2560 (Arduino Mega) or PIC 16F887.
- **Battery Module**: TP4056 with 3200mAh 3.7V 18650 Rechargeable Li-Ion Batteries.
- **Switch**: Toggle switch for power control.
- **OLED Display**: SSD1306 for displaying robot status.

## Features
- **Line Following**: The robot follows a black line on a white background using IR sensors.
- **Obstacle Detection**: Utilizes an ultrasonic sensor to detect and interact with obstacles.
- **Gripper Mechanism**: The robot can grip and move obstacles using a stepper motor.
- **Motor Control**: DC motors allow the robot to move forward, turn, and stop.
- **OLED Display**: Displays real-time sensor readings and distance information.

## Setup

### Hardware Connections
1. Connect the IR sensors to pins 2 through 7.
2. Connect the DC motors to pins 8 through 11.
3. Connect the ultrasonic sensor to pins 12 (trigger) and 13 (echo).
4. Connect the gripper motor to pin A0.
5. Connect the power switch to pin A1.
6. Connect the OLED display using the I2C interface (pins A4 and A5).

### Software
1. The project is programmed using Arduino IDE.
2. Ensure that the Adafruit GFX and SSD1306 libraries are installed.

## Usage

1. **Power On**: Use the toggle switch to power on the robot.
2. **Operation**:
   - The robot will start following the line and moving forward.
   - If an obstacle is detected within 10 cm, the robot will grip the obstacle, perform a clockwise rotation, and continue navigating.
   - The OLED display will show the current line-following status and distance measurements.

## Code
The code is organized into several files for better readability and maintainability:
- `Gripper.cpp` / `Gripper.h`: Controls the gripper mechanism.
- `IRSensorArray.cpp` / `IRSensorArray.h`: Handles the IR sensor readings.
- `MotorController.cpp` / `MotorController.h`: Manages the DC motors.
- `OLEDDisplay.cpp` / `OLEDDisplay.h`: Manages the OLED display.
- `UltrasonicSensor.cpp` / `UltrasonicSensor.h`: Handles distance measurements.
- `Robot.cpp` / `Robot.h`: Contains the main logic for the robot's behavior.
- `main.ino`: The main Arduino sketch file that integrates all components.

## License
This project is licensed under the MIT License - see the LICENSE file for details.

## Acknowledgments
- Adafruit for the GFX and SSD1306 libraries.
- Arduino community for support and inspiration.
