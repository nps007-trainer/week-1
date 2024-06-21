#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

// Function to convert Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Function to read temperature in the current unit
void readTemperature(float temperature, int unit) {
    if (unit == 0) { // Celsius
        printf("Current temperature: %.2f°C\n", temperature);
    } else { // Fahrenheit
        printf("Current temperature: %.2f°F\n", temperature);
    }
}

int main() {
    float currentTempCelsius = 25.0; // Starting temperature in Celsius
    float currentTempFahrenheit = celsiusToFahrenheit(currentTempCelsius);
    int currentUnit = 0; // 0 for Celsius, 1 for Fahrenheit

    // Initial temperature display
    readTemperature(currentTempCelsius, currentUnit);

    // Toggle between Celsius and Fahrenheit
    currentUnit ^= 1; // Toggle unit using XOR operation (0 to 1 or 1 to 0)
    if (currentUnit == 0) {
        readTemperature(currentTempCelsius, currentUnit);
    } else {
        readTemperature(currentTempFahrenheit, currentUnit);
    }

    return 0;
}
