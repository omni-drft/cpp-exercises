#include <iostream>

int main() {

    int printed {};
    int unprinted {};

    for (int i {1}; i <= 120; ++i) {
        
        if (i % 11 ==  0 && i % 5 == 0) {
            unprinted++;
        }
        else {
            std::cout << i << std::endl;
            printed++;
        }
    }

    return 0;
}