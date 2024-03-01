#include <iostream>

int main() {

    int a {6}, b {2};
    int amount {};
    while (amount < 100) {
        std::cout << a << std::endl << b << std::endl;
        a += 2;
        b++;
        amount += 2;
    }

    return 0;
}