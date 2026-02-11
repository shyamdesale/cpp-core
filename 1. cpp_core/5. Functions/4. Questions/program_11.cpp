#include <iostream>
#include <iomanip>

// ===== Constants =====
constexpr double ABSOLUTE_ZERO_C  = -273.15;
constexpr double FREEZING_POINT_F = 32.0;
constexpr double C_TO_F_FACTOR    = 9.0 / 5.0;
constexpr double F_TO_C_FACTOR    = 5.0 / 9.0;

// ===== Function prototypes =====
bool isValidCelsius(double c);
double celsiusToFahrenheit(double c);
double fahrenheitToCelsius(double f);

double celsiusToKelvin(double c);
double kelvinToCelsius(double k);
double fahrenheitToKelvin(double f);
double kelvinToFahrenheit(double k);

// ===== Main =====
int main() {
    double celsius;

    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;

    if (!std::cin) {
        std::cout << "Invalid numeric input.\n";
        return 1;
    }

    if (!isValidCelsius(celsius)) {
        std::cout << "Temperature below absolute zero.\n";
        return 1;
    }

    double fahrenheit = celsiusToFahrenheit(celsius);
    double kelvin     = celsiusToKelvin(celsius);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nCelsius: " << celsius << " °C\n";
    std::cout << "Fahrenheit: " << fahrenheit << " °F\n";
    std::cout << "Kelvin: " << kelvin << " K\n";

    return 0;
}

// ===== Validation =====
bool isValidCelsius(double c) {
    return c >= ABSOLUTE_ZERO_C;
}

// ===== Basic conversions =====
double celsiusToFahrenheit(double c) {
    return (c * C_TO_F_FACTOR) + FREEZING_POINT_F;
}

double fahrenheitToCelsius(double f) {
    return (f - FREEZING_POINT_F) * F_TO_C_FACTOR;
}

// ===== Kelvin conversions =====

// Celsius → Kelvin
double celsiusToKelvin(double celsius) {
    return celsius - ABSOLUTE_ZERO_C;
}

// Kelvin → Celsius
double kelvinToCelsius(double kelvin) {
    return kelvin + ABSOLUTE_ZERO_C;
}

// Fahrenheit → Kelvin
double fahrenheitToKelvin(double fahrenheit) {
    double celsius = fahrenheitToCelsius(fahrenheit);
    return celsiusToKelvin(celsius);
}

// Kelvin → Fahrenheit
double kelvinToFahrenheit(double kelvin) {
    double celsius = kelvinToCelsius(kelvin);
    return celsiusToFahrenheit(celsius);
}
