#include <iostream>

int main() {
    int num1 {0}, num2 {0};

    std::cout << std::boolalpha;
    std::cout << "Enter 2 ints: ";
    std::cin >> num1 >> num2;

    std::cout << num1 << " > " << num2 << ": " << (num1 > num2) << std::endl;    
    std::cout << num1 << " > " << num2 << ": " << (num1 > num2) << std::endl;    
    std::cout << num1 << " > " << num2 << ": " << (num1 > num2) << std::endl;    
    std::cout << num1 << " > " << num2 << ": " << (num1 > num2) << std::endl;    

    const int lower {10}, upper {20};

    std::cout << "Enter an int greater than " << lower << std::endl;
    std::cin >> num1;
    std::cout << num1 << " > " << lower << " is " << (num1 > lower) << std::endl;

    std::cout << "Enter an int less than or equal than " << upper << std::endl;
    std::cin >> num1;
    std::cout << num1 << " <= " << upper << " is " << (num1 <= upper) << std::endl;

    return 0;
}