# Crop Care Bluetooth Rover

## Overview

Crop Care Bluetooth Rover is an Arduino-based smart agricultural rover designed to reduce direct human exposure to insecticides and pesticides. The rover can be remotely controlled using a smartphone via Bluetooth and is equipped with a spraying mechanism for applying insecticides in agricultural fields.

This project was developed as part of the **Microcontroller and Microprocessor Laboratory** course.

## Problem Statement

Farmers are often exposed to harmful chemicals while manually spraying pesticides and insecticides. Continuous exposure may cause health risks and reduce work efficiency.

The Crop Care Bluetooth Rover addresses this problem by allowing remote spraying, minimizing human contact with chemicals while saving time and labor.

## Features

* Bluetooth-based wireless control
* Smartphone-controlled movement
* Insecticide spraying mechanism
* Reduced human exposure to chemicals
* Time-efficient and labor-saving operation
* Low-cost implementation using Arduino

## Hardware Components

* Arduino Nano
* HC-05 Bluetooth Module
* L298N Motor Driver Module
* 2WD Chassis
* 2 DC Motors
* Water Pump
* 12V Battery Pack
* Li-Po Battery
* Connecting Wires

## Software Requirements

* Arduino IDE
* Serial Bluetooth Terminal / Bluetooth Controller App
* USB Driver for Arduino Nano

## Pin Configuration

| Component    | Arduino Pin |
| ------------ | ----------- |
| Motor A IN1  | D2          |
| Motor A IN2  | D3          |
| Motor B IN3  | D4          |
| Motor B IN4  | D5          |
| Pump Control | D6          |

## Control Commands

| Command | Action               |
| ------- | -------------------- |
| U       | Move Backward        |
| D       | Move Forward         |
| L       | Turn Left            |
| R       | Turn Right + Pump ON |
| S       | Stop Vehicle         |

## Working Principle

1. The smartphone sends commands through Bluetooth.
2. The HC-05 module receives the commands and forwards them to the Arduino Nano.
3. The Arduino processes the received command.
4. The L298N motor driver controls the DC motors according to the command.
5. When the rover receives the command 'R', the pump is activated to spray insecticide.
6. The rover can move around the field while performing spraying operations.

## Arduino Code

The project is programmed using Arduino C/C++ in the Arduino IDE. Communication is established through serial communication at 9600 baud rate.

## Applications

* Agricultural insecticide spraying
* Pesticide spraying in crop fields
* Hazardous area inspection
* Remote agricultural monitoring

## Future Improvements

* Obstacle detection using ultrasonic sensors
* Autonomous navigation
* GPS-based field coverage
* Soil moisture monitoring
* IoT integration for remote monitoring

## Team Members

* Pranto Ghosh
* Md. Sibatullah Hosen Rafi

## Acknowledgement

This project was successfully demonstrated in the Microcontroller and Microprocessor Laboratory. Special thanks to our course instructor and lab assistants for their guidance and support throughout the project.
