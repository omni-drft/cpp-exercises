#include <iostream>

int main() {
    char c {};
    int count {};

    while (c != 'x') {
        std::cin >> c;
        count++;
    }

    std::cout << count << std::endl;

    return 0;
}