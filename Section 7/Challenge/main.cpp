#include <iostream>
#include <vector>

int main() {
    std::vector<int> vector1, vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    std::cout << "First elem: " << vector1.at(0) << std::endl;
    std::cout << "Second elem: " << vector1.at(1) << std::endl;
    std::cout << "Size of vector1: " << vector1.size() << std::endl;

    vector2.push_back(100);
    vector2.push_back(200);

    std::cout << "\nFirst elem: " << vector2.at(0) << std::endl;
    std::cout << "Second elem: " << vector2.at(1) << std::endl;
    std::cout << "Size of vector2: " << vector2.size() << std::endl;

    std::vector<std::vector<int>> vector2D;

    vector2D.push_back(vector1);
    vector2D.push_back(vector2);

    std::cout << "\nVector2D (0, 0)" << vector2D.at(0).at(0) << std::endl;
    std::cout << "Vector2D (0, 1)" << vector2D.at(0).at(1) << std::endl;
    std::cout << "Vector2D (1, 0)" << vector2D.at(1).at(0) << std::endl;
    std::cout << "Vector2D (1, 1)" << vector2D.at(1).at(1) << std::endl;

    vector1.at(0) = 1000;

    std::cout << "\nVector2D (0, 0)" << vector2D.at(0).at(0) << std::endl;
    std::cout << "Vector2D (0, 1)" << vector2D.at(0).at(1) << std::endl;
    std::cout << "Vector2D (1, 0)" << vector2D.at(1).at(0) << std::endl;
    std::cout << "Vector2D (1, 1)" << vector2D.at(1).at(1) << std::endl;

    std::cout << "\nFirst elem: " << vector1.at(0) << std::endl;
    std::cout << "Second elem: " << vector1.at(1) << std::endl;

    return 0;
}