#include <iostream>

int main() {
    std::cout << "Tell me your favorite number between 1 and 100" << std::endl;

    int num;
    std::cin >> num;

    std::cout << "Damn, that's my favorite number too!" << std::endl;
    std::cout << "Like, really, " << num << " is my favorite I swear." << std::endl;

    return 0;
}