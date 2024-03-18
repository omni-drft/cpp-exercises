#include <iostream>
#include <random>

void drawEmptySquare(int);

int main() {

    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist (5, 12);

    int n {dist(mt)};
    std::cout << "The size of the empty square is " << n << "x" << n << std::endl;

    drawEmptySquare(n);

    return 0;
}

void drawEmptySquare(int n) {
    for (int i {}; i < n; i++) {
        for (int j {}; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                std::cout << "#";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }
}