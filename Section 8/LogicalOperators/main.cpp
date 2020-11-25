#include <iostream>

int main() {
    int num {};

    const int lower {10}, upper {20};

    std::cout << std::boolalpha;

    std::cout << "Enter an int between " << lower << " and " << upper << ": ";
    std::cin >> num;

    bool withinBounds {false};
    withinBounds = num > lower && num < upper;
    std::cout << num << " is between " << lower << " and " << upper << ": " << withinBounds << std::endl;

    bool outsideBounds {false};
    outsideBounds = num < lower || num > upper;
    std::cout << num << " is outside " << lower << " and " << upper << ": " << outsideBounds << std::endl;

    bool onBounds {false};
    onBounds = num == lower || num == upper;
    std::cout << num << " is either " << lower << " and " << upper << ": " << onBounds << std::endl;

    bool wearCoat {false};
    double temperature {0.0};
    int windSpeed {0};

    const int windSpeedForCoat {25};
    const double temperatureForCoat {45};

    std::cout << "Enter temp: ";
    std::cin >> temperature;

    std::cout << "Enter wind speed: ";
    std::cin >> windSpeed;

    wearCoat = temperature < temperatureForCoat || windSpeed > windSpeedForCoat;
    std::cout << "Need coat? (OR): " << wearCoat << std::endl;

    wearCoat = temperature < temperatureForCoat && windSpeed > windSpeedForCoat;
    std::cout << "Need coat? (AND): " << wearCoat;

    return 0;
}