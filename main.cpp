#include <iostream>

// Function to check if the target's coordinates are within the valid view area
// Valid X area: 0 to 1920 (e.g., screen width)
// Valid Y area: 0 to 1080 (e.g., screen height)
bool isTargetInView(int x, int y) {
    if (x < 0 || x > 1920) {
        return false; // Target lost on X axis
    }
    if (y < 0 || y > 1080) {
        return false; // Target lost on Y axis
    }
    return true; // Target is valid and in view
}

int main() {
    std::cout << "--- TargetTracker System Initialized ---" << std::endl;

    // Simulating sensor data coming from the eye-tracking hardware
    int sensorX = 960;
    int sensorY = 540;

    if (isTargetInView(sensorX, sensorY)) {
        std::cout << "Status: Target Locked. Coordinates: (" << sensorX << ", " << sensorY << ")" << std::endl;
    } else {
        std::cout << "Error: Target Lost! Invalid coordinates." << std::endl;
    }

    return 0;
}