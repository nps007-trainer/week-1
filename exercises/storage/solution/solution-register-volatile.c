#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // For usleep()

// Simulated hardware device using volatile variable
volatile int hardware_value = 0;

// Function to write a value to the hardware device
void writeToDevice(int value) {
    hardware_value = value;
    printf("Wrote %d to the hardware device.\n", value);
}

// Function to read the current value from the hardware device
int readFromDevice() {
    int value = hardware_value;
    printf("Read %d from the hardware device.\n", value);
    return value;
}

int main() {
    // Simulate changes in hardware value
    writeToDevice(50);
    readFromDevice();
    
    writeToDevice(75);
    readFromDevice();

    writeToDevice(100);
    readFromDevice();

    return 0;
}
