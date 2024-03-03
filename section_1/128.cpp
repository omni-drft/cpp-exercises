#include <iostream>
#include <locale>

int main () {

    long long int result {};
    int i {};
    char number {};
    int multiplier {10000};
    while (i < 5) {
        std::cin >> number;
        if (isdigit(number)) {
            result += static_cast<int>(number - '0') * multiplier;
            multiplier /= 10;
            i++;
        }
    }

    std::cout << result << std::endl;


    return 0;
}