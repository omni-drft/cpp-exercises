#include <iostream>

int main() {

    int i {1};

    int amount {};
    while (amount <= 100) {
        for (int j {}; j < i; ++j) {
            std::cout << i << std::endl;
            ++amount;
            if (amount > 100) {
                break;
            }
        }
        i++;
    }

    return 0;
}