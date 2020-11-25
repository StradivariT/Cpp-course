#include <iostream>

int main() {
    const double usdPerEuro {1.19};

    std::cout << "EUR to USD converter LOL" << std::endl;
    std::cout << "Enter the value in EUR: ";

    double euros {0};
    std::cin >> euros;

    double dollars {0};
    dollars = euros * usdPerEuro;

    std::cout << "Those are " << dollars << " dollars m8" << std::endl;

    return 0;
}