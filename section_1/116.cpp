#include <iostream>

int main() {

    int amount {};
    int i {1};
    int start {100};

    while (amount < 100) {
        std::cout << start << std::endl;
        start -= i++;
        amount++;
    }

    return 0;
}