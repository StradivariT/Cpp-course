#include <iostream>

int main() {
    int counter {10}, result {0};

    // std::cout << "Counter: " << counter << std::endl;

    // counter = counter + 1;
    // std::cout << "Counter: " << counter << std::endl;

    // counter++;
    // std::cout << "Counter: " << counter << std::endl;

    // ++counter;
    // std::cout << "Counter: " << counter << std::endl;

    // // preincrement
    // counter = 10;

    // std::cout << "Counter: " << counter << std::endl;

    // result = ++counter;
    // std::cout << "Counter: " << counter << std::endl;
    // std::cout << "Result: " << result << std::endl;

    // // postincrement
    // counter = 10;
    // result = 0;

    // std::cout << "Counter: " << counter << std::endl;

    // result = counter++;
    // std::cout << "Counter: " << counter << std::endl;
    // std::cout << "Result: " << result << std::endl;

    // more examples

    counter = 10;
    result = 0;

    result = ++counter + 10;

    std::cout << "Counter: " << counter << std::endl;
    std::cout << "Result: " << result << std::endl;

    counter = 10;
    result = 0;

    result = counter++ + 10;

    std::cout << "Counter: " << counter << std::endl;
    std::cout << "Result: " << result << std::endl;

    return 0;
}