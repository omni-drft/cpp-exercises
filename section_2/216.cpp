#include <iostream>
#include <random>

void drawSquare(int);

int main() {

    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(5, 12);

    int n {dist(mt)};
    drawSquare(n);
    
    return 0;
}

void drawSquare(int n) {
    for (int i {}; i < n; i++) {
        for (int j {}; j < n; j++)
            std::cout << "#";
        std::cout << std::endl;
    }
}