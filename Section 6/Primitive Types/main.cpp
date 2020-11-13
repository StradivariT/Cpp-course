#include <iostream>

int main() {
    // Characters
    char firstInitial {'F'};
    std::cout << "My first initial is " << firstInitial << std::endl;

    // Integers
    unsigned short int examScore {55};
    std::cout << "My exam score was " << examScore << std::endl;

    int countriesRepresented {65};
    std::cout << "There were " << countriesRepresented << " countries represented in my meeting" << std::endl;

    long peopleInFlorida {20610000};
    std::cout << "There are about " << peopleInFlorida << " people living in Florida" << std::endl;

    long peopleOnEarth {7'600'000'000};
    std::cout << "There are about " << peopleOnEarth << " people on Earth" << std::endl;

    long long distanceToAlphaCentauri {9'461'000'000'000};
    std::cout << "The distance to alpha centauri is " << distanceToAlphaCentauri << " kilometeres" << std::endl;

    // Floating point
    float carPayment {401.23};
    std::cout << "My car payment is " << carPayment << std::endl;

    double pi {3.14159};
    std::cout << "PI is " << pi << std::endl;

    long double largeAmount {2.7e120};
    std::cout << largeAmount << " is a very large number" << std::endl;

    // Boolean
    bool gameOver {false};
    std::cout << "The value of gameOver is " << gameOver << std::endl;

    // Overflow examples
    // short value1 {30000};
    // short value2 {1000};
    // short product {value1 * value2};

    // std::cout << "The product of " << value1 << " and " << value2 << " is " << product << std::endl;

    return 0;
}