#include <iostream>
#include <iomanip>

// Constants for conversion formulas
constexpr double FREEZING_POINT_C = 0.0;
constexpr double FREEZING_POINT_F = 32.0;
constexpr double ABSOLUTE_ZERO_C  = -273.15;
constexpr double F_TO_C_FACTOR    = 5.0 / 9.0;
constexpr double C_TO_F_FACTOR    = 9.0 / 5.0;

// Function prototypes
bool isValidCelsius(double c);
double celsiusToFahrenheit(double c);
double fahrenheitToCelsius(double f);

int main() {
    double celsius;

    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;

    if (!std::cin) {
        std::cout << "Error: Invalid numeric input.\n";
        return 1;
    }

    if (!isValidCelsius(celsius)) {
        std::cout << "Error: Temperature below absolute zero.\n";
        return 1;
    }

    double fahrenheit = celsiusToFahrenheit(celsius);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << celsius << " °C = " << fahrenheit << " °F\n";

    return 0;
}

// Validate against absolute zero
bool isValidCelsius(double c) {
    return c >= ABSOLUTE_ZERO_C;
}

// C → F
double celsiusToFahrenheit(double c) {
    return (c * C_TO_F_FACTOR) + FREEZING_POINT_F;
}

// F → C (extra utility)
double fahrenheitToCelsius(double f) {
    return (f - FREEZING_POINT_F) * F_TO_C_FACTOR;
}
