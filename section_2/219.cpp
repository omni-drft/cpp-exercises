#include <iostream>
#include <random>

int main() {
    
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist (5, 12);

    int n {dist(mt)};
    for(int i {}; i < n; i++) {
        for (int j {}; j <= i; j++)
            std::cout << "#";
        std::cout << std::endl;
    }

    for (int i {}; i < n; i++) {
        for (int j {}; j < n - i - 1; j++)
            std::cout << ' ';
        for (int j {}; j <= i; j++)
            std::cout << "#";
        std::cout << std::endl;
    }

    return 0;
}