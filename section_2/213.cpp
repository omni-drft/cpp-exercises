#include <iostream>
#include <random>

void func(int a, int b, char c);

int main() {
    
    char c {};
    std::cin >> c;

    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(5, 10);

    int a {dist(mt)};
    int b {dist(mt)};

    func(a, b, c);

    return 0;
}

void func(int a, int b, char c) {
    for (int i {}; i < a; i++) {
        for (int j {}; j < b; j++)
            std::cout << c;
        std::cout << std::endl;
    }
}