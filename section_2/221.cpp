#include <iostream>
#include <random>

int main() {

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(5, 12);

    int n {dis(gen)};

    std::uniform_int_distribution<int> dis2(1, n - 1);

    int x {dis2(gen)};
    int y {dis2(gen)};

    std::cout << "Size of the square: " << n << std::endl;
    std::cout << "Position of the @: " << x << ", " << y << std::endl;

    for (size_t i {}; i < n; i++) {
        for (size_t j {}; j < n; j++) {
            if (i == x && j == y)
                std::cout << "@";
            else
                std::cout << "#";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    for (size_t i {}; i < n; i++) {
        for (size_t j {}; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                std::cout << "#";
            else if (i == x && j == y)
                std::cout << "@";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }



    return 0;
}

