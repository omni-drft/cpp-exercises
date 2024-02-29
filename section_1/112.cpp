#include <iostream>

int main() {

    for (int i {-25}; i <= 25; i++) {
        if (i == 0)
            continue;
        std::cout << i << std::endl;
    }

    return 0;
}