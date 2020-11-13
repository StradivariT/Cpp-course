#include <iostream>

int main() {
    std::cout << "Hi, welcome to the... store I guess, how many rooms will there be?" << std::endl;

    int numberOfRooms {0};
    std::cin >> numberOfRooms;

    const float pricePerRoom {30};
    std::cout << "\nNumber of rooms: " << numberOfRooms << std::endl;
    std::cout << "Price per room: $" << pricePerRoom << std::endl;

    float roomsCost {numberOfRooms * pricePerRoom};
    std::cout << "\nCost for all rooms: $" << roomsCost << std::endl;

    const float taxRate {0.06};
    float totalTax {roomsCost * taxRate};

    std::cout << "Total tax: $" << totalTax << std::endl;
    std::cout << "Total estimate: $" << roomsCost + totalTax << std::endl;

    const int validDays {30};
    std::cout << "\nThis estimate is valid for the next " << validDays << " days" << std::endl;

    return 0;
}