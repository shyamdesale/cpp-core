#include <iostream>
#include <iomanip>

// Constants
constexpr double MIN_TEMPERATURE = -273.15;   // Absolute zero
constexpr double MAX_REASONABLE_TEMP = 1000.0; // Demo upper bound

// Function prototypes
bool isValidTemperature(double temp);
double convertCelsiusToFahrenheit(double celsius);
void displayResult(double celsius, double fahrenheit);

int main() {
    double celsius;

    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;

    // Handle non-numeric input
    if (!std::cin) {
        std::cout << "Error: Invalid numeric input." << std::endl;
        return 1;
    }

    if (!isValidTemperature(celsius)) {
        std::cout << "Invalid temperature entered!" << std::endl;
        return 1;
    }

    double fahrenheit = convertCelsiusToFahrenheit(celsius);
    displayResult(celsius, fahrenheit);

    return 0;
}

// Validate temperature range
bool isValidTemperature(double temp) {
    return temp >= MIN_TEMPERATURE && temp <= MAX_REASONABLE_TEMP;
}

// Conversion
double convertCelsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

// Output formatting
void displayResult(double celsius, double fahrenheit) {
    std::cout << std::fixed << std::setprecision(2);
    std::cout << celsius << " °C = " << fahrenheit << " °F" << std::endl;
}
