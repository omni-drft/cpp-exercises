#include <iostream>

int main() {

    char c {};
    int sum {};
    while (sum <= 350) {
        std::cin >> c;
        if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
            sum += c;
        else
            std::cout << "Invalid input" << std::endl;
        std::cout << "Sum: " << sum << std::endl;
    }

    return 0;
}