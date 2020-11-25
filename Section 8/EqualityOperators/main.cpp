#include <iostream>

int main() {
    bool equalResult {false};
    bool notEqualResult {false};

    int num1 {0}, num2 {0};

    // std::cout << std::boolalpha;

    std::cout << "Enter 2 nums: ";
    std::cin >> num1 >> num2;

    equalResult = num1 == num2;
    notEqualResult = num1 != num2;

    std::cout << "Comparison result (equals) " << equalResult << std::endl;
    std::cout << "Comparison result (not equals) " << notEqualResult << std::endl;

    char char1 {}, char2 {};
    
    std::cout << "Enter 2 chars: ";
    std::cin >> char1 >> char2;

    equalResult = char1 == char2;
    notEqualResult = char1 != char2;

    std::cout << "Comparison result (equals) " << equalResult << std::endl;
    std::cout << "Comparison result (not equals) " << notEqualResult << std::endl;

    double double1 {}, double2 {};
    
    std::cout << "Enter 2 doubles: ";
    std::cin >> double1 >> double2;

    equalResult = double1 == double2;
    notEqualResult = double1 != double2;

    std::cout << "Comparison result (equals) " << equalResult << std::endl;
    std::cout << "Comparison result (not equals) " << notEqualResult << std::endl;

    return 0;
}