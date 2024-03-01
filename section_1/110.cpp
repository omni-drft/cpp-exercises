#include <iostream>

int main() {

    // For loop
    for (int i {1}; i <= 100; ++i)
        std::cout << i << std::endl;
    
    // While loop
    int j {1};
    while (j <= 100) {
        std::cout << j << std::endl;
        ++j;
    }

    // Do-while loop
    int k {1};
    do {
        std::cout << k << std::endl;
        ++k;
    } while (k <= 100);


    return 0;
}