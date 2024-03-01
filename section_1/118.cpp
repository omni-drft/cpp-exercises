#include <iostream>

int main() {

    int num {};

    while (true) {
        std::cin >> num;

        if (num >= 1 && num <= 10)
            break;
        
        std::cout << num * 2 << std::endl;
    }

    return 0;
}