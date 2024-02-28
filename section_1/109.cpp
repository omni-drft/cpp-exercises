#include <iostream>

int main() {
    int num {};
    std::cin >> num;

    if (num < 0)
        num--;
    else if (num > 0)
        num++;

    std::cout << num << std::endl;

    if (num % 2 == 0)
        std::cout << "tak" << std::endl;
    else
        std::cout << "nie" << std::endl;
        
    return 0;
}