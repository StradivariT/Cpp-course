#include <iostream>

int main() {
    int total {0}, num1 {0}, num2 {0}, num3 {0};
    const int count {3};

    std::cout << "Enter 3 integers separated by a space: ";
    std::cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

    double average {0.0};
    average = static_cast<double>(total) / count;

    std::cout << "The average of the 3 nums is: " << average << std::endl;

    return 0;
}