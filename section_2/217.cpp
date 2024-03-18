#include <iostream>
#include <random>

void DrawChessBoard(int);

int main() {

    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(5, 12);

    int n {dist(mt)};

    std::cout << "The size of the chess board is " << n << "x" << n << std::endl;

    DrawChessBoard(n);

    return 0;
}

void DrawChessBoard(int n) {
    for (int i {}; i < n; i++) {
        for (int j {}; j < n; j++) {
            if (((i + j) % 2 == 0))
                std::cout << "#";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }
}