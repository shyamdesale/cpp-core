#include <iostream>
#include <iomanip>

// ===== CONSTANTS =====
constexpr double ABSOLUTE_ZERO_C  = -273.15;
constexpr double FREEZING_POINT_C = 0.0;
constexpr double FREEZING_POINT_F = 32.0;
constexpr double C_TO_F_FACTOR    = 9.0 / 5.0;
constexpr double F_TO_C_FACTOR    = 5.0 / 9.0;

// ===== FUNCTION DECLARATIONS =====
double celsiusToFahrenheit(double c);
double fahrenheitToCelsius(double f);

double celsiusToKelvin(double c);
double kelvinToCelsius(double k);
double fahrenheitToKelvin(double f);
double kelvinToFahrenheit(double k);

void displayTemperatureFacts(double celsius);

// ===== MAIN =====
int main() {
    bool keepRunning = true;

    while (keepRunning) {
        std::cout << "\nTemperature Conversion Options:\n";
        std::cout << "1. Celsius to Fahrenheit\n";
        std::cout << "2. Fahrenheit to Celsius\n";
        std::cout << "3. Celsius to Kelvin\n";
        std::cout << "4. Kelvin to Celsius\n";
        std::cout << "5. Fahrenheit to Kelvin\n";
        std::cout << "6. Kelvin to Fahrenheit\n";
        std::cout << "7. Exit\n";
        std::cout << "Enter choice: ";

        int choice;
        std::cin >> choice;

        if (!std::cin) {
            std::cout << "Invalid input. Exiting.\n";
            return 1;
        }

        double inputTemp, result;

        switch (choice) {

        case 1:
            std::cout << "Enter Celsius: ";
            std::cin >> inputTemp;

            result = celsiusToFahrenheit(inputTemp);
            std::cout << std::fixed << std::setprecision(2);
            std::cout << inputTemp << " °C = " << result << " °F\n";
            displayTemperatureFacts(inputTemp);
            break;

        case 2:
            std::cout << "Enter Fahrenheit: ";
            std::cin >> inputTemp;

            result = fahrenheitToCelsius(inputTemp);
            std::cout << std::fixed << std::setprecision(2);
            std::cout << inputTemp << " °F = " << result << " °C\n";
            displayTemperatureFacts(result);
            break;

        case 3:
            std::cout << "Enter Celsius: ";
            std::cin >> inputTemp;

            result = celsiusToKelvin(inputTemp);
            std::cout << std::fixed << std::setprecision(2);
            std::cout << inputTemp << " °C = " << result << " K\n";
            displayTemperatureFacts(inputTemp);
            break;

        case 4:
            std::cout << "Enter Kelvin: ";
            std::cin >> inputTemp;

            result = kelvinToCelsius(inputTemp);
            std::cout << std::fixed << std::setprecision(2);
            std::cout << inputTemp << " K = " << result << " °C\n";
            displayTemperatureFacts(result);
            break;

        case 5:
            std::cout << "Enter Fahrenheit: ";
            std::cin >> inputTemp;

            double c1;
            c1 = fahrenheitToCelsius(inputTemp);
            result = celsiusToKelvin(c1);

            std::cout << std::fixed << std::setprecision(2);
            std::cout << inputTemp << " °F = " << result << " K\n";
            displayTemperatureFacts(c1);
            break;

        case 6:
            std::cout << "Enter Kelvin: ";
            std::cin >> inputTemp;

            double c2;
            c2 = kelvinToCelsius(inputTemp);
            result = celsiusToFahrenheit(c2);

            std::cout << std::fixed << std::setprecision(2);
            std::cout << inputTemp << " K = " << result << " °F\n";
            displayTemperatureFacts(c2);
            break;

        case 7:
            keepRunning = false;
            std::cout << "Exiting program.\n";
            break;

        default:
            std::cout << "Invalid choice.\n";
        }
    }

    return 0;
}

// ===== CONVERSION FUNCTIONS =====
double celsiusToFahrenheit(double c) {
    return (c * C_TO_F_FACTOR) + FREEZING_POINT_F;
}

double fahrenheitToCelsius(double f) {
    return (f - FREEZING_POINT_F) * F_TO_C_FACTOR;
}

double celsiusToKelvin(double c) {
    return c - ABSOLUTE_ZERO_C;
}

double kelvinToCelsius(double k) {
    return k + ABSOLUTE_ZERO_C;
}

double fahrenheitToKelvin(double f) {
    double c = fahrenheitToCelsius(f);
    return celsiusToKelvin(c);
}

double kelvinToFahrenheit(double k) {
    double c = kelvinToCelsius(k);
    return celsiusToFahrenheit(c);
}

// ===== FACT FUNCTION =====
void displayTemperatureFacts(double celsius) {
    std::cout << "\nInteresting facts:\n";

    if (celsius < ABSOLUTE_ZERO_C)
        std::cout << "Below absolute zero (impossible)\n";
    else if (celsius == ABSOLUTE_ZERO_C)
        std::cout << "Absolute zero\n";
    else if (celsius == FREEZING_POINT_C)
        std::cout << "Water freezes\n";
    else if (celsius == 100.0)
        std::cout << "Water boils\n";
    else if (celsius < 0)
        std::cout << "Below freezing\n";
    else if (celsius <= 20)
        std::cout << "Cool temperature\n";
    else if (celsius <= 30)
        std::cout << "Room temperature\n";
    else if (celsius <= 40)
        std::cout << "Hot\n";
    else if (celsius < 100)
        std::cout << "Very hot\n";
    else
        std::cout << "Above boiling\n";
}
