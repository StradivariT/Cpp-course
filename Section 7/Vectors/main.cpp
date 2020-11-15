#include <iostream>
#include <vector>

int main() {
    std::vector<char> vowels {'a', 'e', 'i', 'o', 'u'};

    std::cout << vowels[0] << std::endl;
    std::cout << vowels[4] << std::endl;

    std::vector<int> testScores {100, 98, 89};

    std::cout << "Test scores using array syntax:" << std::endl;
    std::cout << testScores[0] << std::endl;
    std::cout << testScores[1] << std::endl;
    std::cout << testScores[2] << std::endl;

    std::cout << "Test scores using vector syntax:" << std::endl;
    std::cout << testScores.at(0) << std::endl;
    std::cout << testScores.at(1) << std::endl;
    std::cout << testScores.at(2) << std::endl;
    std::cout << "There are " << testScores.size() << " scores in the vector" << std::endl;

    std::cout << "Enter 3 scores: ";
    std::cin >> testScores.at(0);
    std::cin >> testScores.at(1);
    std::cin >> testScores.at(2);

    std::cout << "Updated test scores:" << std::endl;
    std::cout << testScores.at(0) << std::endl;
    std::cout << testScores.at(1) << std::endl;
    std::cout << testScores.at(2) << std::endl;

    int scoreToAdd {0};
    std::cout << "Enter a test score to add to the vector: ";
    std::cin >> scoreToAdd;

    testScores.push_back(scoreToAdd);

    std::cout << "Test scores are now:" << std::endl;
    std::cout << testScores.at(0) << std::endl;
    std::cout << testScores.at(1) << std::endl;
    std::cout << testScores.at(2) << std::endl;
    std::cout << testScores.at(3) << std::endl;
    std::cout << "There are now " << testScores.size() << " scores in the vector" << std::endl;

    std::vector<std::vector<int>> movieRatings {
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4}
    };

    std::cout << "2D vector array syntax" << std::endl;
    std::cout << movieRatings[0][0] << std::endl;
    std::cout << movieRatings[0][1] << std::endl;
    std::cout << movieRatings[0][2] << std::endl;
    std::cout << movieRatings[0][3] << std::endl;

    std::cout << "2D vector vector syntax" << std::endl;
    std::cout << movieRatings.at(0).at(0) << std::endl;
    std::cout << movieRatings.at(0).at(1) << std::endl;
    std::cout << movieRatings.at(0).at(2) << std::endl;
    std::cout << movieRatings.at(0).at(3) << std::endl;

    return 0;
}
