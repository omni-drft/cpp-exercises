#include <iostream>

int main() {

    for (int i {100}; i >= 10; i--) {
        if (i % 7 == 0)
            continue;
        std::cout << i << std::endl;
    }

    return 0;
}