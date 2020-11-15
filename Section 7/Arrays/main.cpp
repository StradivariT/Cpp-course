#include <iostream>

int main() {
    char vowels[] {'a', 'e', 'i', 'o', 'u'};
    std::cout << "The first vowel is: " << vowels[0] << std::endl;
    std::cout << "The last vowel is: " << vowels[4] << std::endl;

    double hiTemps[] {90.1, 89.8, 77.5, 81.6};
    std::cout << "The first temp is " << hiTemps[0] << std::endl;

    hiTemps[0] = 100.7;

    std::cout << "The first temp is now " << hiTemps[0] << std::endl;

    int testScores [5] {};

    std::cout << "First score: " << testScores[0] << std::endl;
    std::cout << "Second score: " << testScores[1] << std::endl;
    std::cout << "Third score: " << testScores[2] << std::endl;
    std::cout << "Fourth score: " << testScores[3] << std::endl;
    std::cout << "Fifth score: " << testScores[4] << std::endl;

    std::cout << "Enter 5 test scores" << std::endl;
    std::cin >> testScores[0] >> testScores[1] >> testScores[2] >> testScores[3] >> testScores[4];

    std::cout << "The updated array is" << std::endl;
    std::cout << "First score: " << testScores[0] << std::endl;
    std::cout << "Second score: " << testScores[1] << std::endl;
    std::cout << "Third score: " << testScores[2] << std::endl;
    std::cout << "Fourth score: " << testScores[3] << std::endl;
    std::cout << "Fifth score: " << testScores[4] << std::endl;

    return 0;
}