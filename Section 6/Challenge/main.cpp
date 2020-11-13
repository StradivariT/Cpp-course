#include <iostream>

int main() {
    std::cout << "Hi, welcome to the store again" << std::endl;

    int smallRooms {0};
    std::cout << "How many small rooms will there be? ";
    std::cin >> smallRooms;

    int bigRooms {0};
    std::cout << "How many big rooms will there be? ";
    std::cin >> bigRooms;

    std::cout << "\nEstimate for cleaning that stuff" << std::endl;
    std::cout << "Number of small rooms: " << smallRooms << std::endl;
    std::cout << "Number of big rooms: " << bigRooms << std::endl;
    
    const float smallPrice {25};
    std::cout << "Price per small room: $" << smallPrice << std::endl;

    const float bigPrice {35};
    std::cout << "Price per big room: $" << bigPrice << std::endl;

    float roomsCost {(smallPrice * smallRooms) + (bigPrice * bigRooms)};
    std::cout << "Cost: $" << roomsCost << std::endl;

    const float taxRate {0.06};
    float totalTax {roomsCost * taxRate};
    std::cout << "Tax: $" << totalTax << std::endl;

    std::cout << "===========================" << std::endl;
    std::cout << "Total estimate: $" << roomsCost + totalTax << std::endl;

    const int validDays {30};
    std::cout << "This estimate is valid for " << validDays << " days" << std::endl;

    return 0;
}