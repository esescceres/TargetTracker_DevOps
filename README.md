# TargetTracker: Embedded DevOps & CI/CD Pipeline 🎯

[![Embedded DevOps CI Pipeline](https://github.com/ESRA_CERENIN_KULLANICI_ADI/TargetTracker_DevOps/actions/workflows/test.yml/badge.svg)](https://github.com/esescceres/TargetTracker_DevOps/actions/workflows/test.yml)

## Overview
TargetTracker is a simulated foundational project demonstrating the intersection of **Embedded Systems Logic, Automated Software Testing, and DevOps (CI/CD)**. 

Designed with critical systems in mind (such as defense or aerospace eye-tracking sensors), this project processes simulated X-Y coordinate data, validates the input against defined view-area boundaries, and ensures absolute system reliability through automated unit testing.

## Tech Stack & Skills Demonstrated
* **Language:** C++ (Core logic for hardware/sensor simulation)
* **Testing:** C++ `cassert` (Unit Testing for edge cases and hardware failures)
* **DevOps / CI-CD:** GitHub Actions, YAML, Linux (Ubuntu) environment
* **Version Control:** Git & GitHub

## How It Works
1. **Sensor Simulation (`main.cpp`):** Reads simulated data (e.g., coordinates 960, 540) and verifies if the target is locked within the valid operational screen resolution (1920x1080).
2. **Automated Unit Tests (`test.cpp`):** Simulates hardware malfunctions, such as receiving negative coordinates (e.g., -50) or out-of-bounds data, ensuring the core logic catches these errors without crashing.
3. **Continuous Integration (`.github/workflows/test.yml`):** Every time new code is pushed to the `main` branch, a GitHub Actions runner automatically:
   * Sets up a Linux environment.
   * Compiles the C++ test code using `g++`.
   * Executes the tests.
   * Reports a Pass/Fail status (visible in the badge above).

## Purpose
This repository serves as a practical portfolio piece for **Test Engineering and DevOps** roles, proving the ability to not only write verification tests but also to automate their execution within a modern CI/CD pipeline.