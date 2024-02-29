#include <iostream> 

int main() {
    for (int i {}; i <= 1000; i++) {
        if (i % 6 == 0) {
            std::cout << i << std::endl;
        }
    }
}