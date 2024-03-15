#include <iostream>
#include <random>

int main() {

    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(20, 30);

    int randomNumber = dist(mt);

    char c {};
    std::cin >> c;

    for (size_t i{}; i < randomNumber; i++)
        std::cout << c << std::endl;

    return 0;
}