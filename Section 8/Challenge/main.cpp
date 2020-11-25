#include <iostream>

int main() {
    int cents {0};
    std::cout << "Enter an amount in cents: ";
    std::cin >> cents;

    const int dollarCents {100}, quarterCents {25}, dimeCents {10}, nickelCents {5};

    int dollarsChange {cents / dollarCents};
    cents %= dollarCents;

    int quartersChange {cents / quarterCents};
    cents %= quarterCents;

    int dimesChange {cents / dimeCents};
    cents %= dimeCents;

    int nickelsChange {cents / nickelCents};
    cents %= nickelCents;

    std::cout << "\nYou can provide change as follows:" << std::endl;
    std::cout << "Dollars  : " << dollarsChange << std::endl;
    std::cout << "Quarters : " << quartersChange << std::endl;
    std::cout << "Dimes    : " << dimesChange << std::endl;
    std::cout << "Nickels  : " << nickelsChange << std::endl;
    std::cout << "Pennies  : " << cents << std::endl;

    return 0;
}