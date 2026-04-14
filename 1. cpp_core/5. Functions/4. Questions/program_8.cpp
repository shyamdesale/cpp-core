#include <iostream>
// Function to convert Celsius to Fahrenheit with validation
double celsiusToFahrenheit(double celsius) {
    const double ABSOLUTE_ZERO_C = -273.15;
    // Validate input
    if (celsius < ABSOLUTE_ZERO_C) {
        std::cout << "Warning: Temperature below absolute zero!" << std::endl;
        return -999.0;
    }

    return (celsius * 9.0 / 5.0) + 32.0;
}
// Function to get and validate user input
double getValidTemperature() {
    double temp;
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> temp;
    // Basic validation
    if (temp < -273.15) {
        std::cout << "Invalid temperature! Using absolute zero instead." << std::endl;
        return -273.15;
    }
    return temp;
}
int main() {
    double celsius = getValidTemperature();
    double fahrenheit = celsiusToFahrenheit(celsius);
    if (fahrenheit != -999.0) {
        std::cout << celsius << "°C = " << fahrenheit << "°F" << std::endl;
    }
    return 0;
}