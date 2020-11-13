#include <iostream>
#include <climits>

int main() {
    std::cout << "sizeof information" << std::endl;
    std::cout << "====================================" << std::endl;

    std::cout  << "char: " << sizeof(char) << " bytes" << std::endl;
    std::cout  << "int: " << sizeof(int) << " bytes" << std::endl;
    std::cout  << "unsigned int: " << sizeof(unsigned int) << " bytes" << std::endl;
    std::cout  << "short: " << sizeof(short) << " bytes" << std::endl;
    std::cout  << "long: " << sizeof(long) << " bytes" << std::endl;
    std::cout  << "long long: " << sizeof(long long) << " bytes" << std::endl;

    std::cout << "====================================" << std::endl;
    std::cout  << "float: " << sizeof(float) << " bytes" << std::endl;
    std::cout  << "double: " << sizeof(double) << " bytes" << std::endl;
    std::cout  << "long double: " << sizeof(long double) << " bytes" << std::endl;

    std::cout << "====================================" << std::endl;
    std::cout << "Minimum values" << std::endl;
    std::cout << "char: " << CHAR_MIN << std::endl;
    std::cout << "int: " << INT_MIN << std::endl;
    std::cout << "short: " << SHRT_MIN << std::endl;
    std::cout << "long: " << LONG_MIN << std::endl;
    std::cout << "long long: " << LLONG_MIN << std::endl;

    std::cout << "====================================" << std::endl;
    std::cout << "Maximum values" << std::endl;
    std::cout << "char: " << CHAR_MAX << std::endl;
    std::cout << "int: " << INT_MAX << std::endl;
    std::cout << "short: " << SHRT_MAX << std::endl;
    std::cout << "long: " << LONG_MAX << std::endl;
    std::cout << "long long: " << LLONG_MAX << std::endl;

    std::cout << "====================================" << std::endl;
    std::cout << "sizeof using variable names" << std::endl;

    int age {23};
    std::cout << "age is " << sizeof(age) << " bytes" << std::endl;

    double wage {100};
    std::cout << "wage is " << sizeof(wage) << " bytes" << std::endl;

    return 0;
}