#include <iostream>

int main() {

    int tab[] = {3, 1, 2, 1};
    
    for (int i{}; i < 100; ++i) {
        std::cout << tab[i % 4] << std::endl;
    }

    return 0;
}