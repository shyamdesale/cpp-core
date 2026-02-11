#include <iostream>

// Returns true if temperature is physically possible
bool validateTemperature(double celsius) {
    constexpr double ABSOLUTE_ZERO = -273.15;
    return celsius >= ABSOLUTE_ZERO;
}

int main() {
    double temp;

    std::cout << "Enter temperature in Celsius: ";
    std::cin >> temp;

    if (validateTemperature(temp)) {
        std::cout << "Valid temperature" << std::endl;
    } else {
        std::cout << "Error: Temperature cannot be below absolute zero!" << std::endl;
    }

    return 0;
}
