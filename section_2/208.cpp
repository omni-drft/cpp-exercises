#include <iostream>
#include <iomanip>
#include <random>

int main() {

    srand(time(NULL));
    
    double result {};
    int first {rand() % 10};
    
    if(first == 9) {
        result = 1;
        std::cout << std::fixed << std::setprecision(3) << result << std::endl;
        return 0;
    }

    result = 0;

    result += (rand() % 10) * 0.1;
    result += (rand() % 10) * 0.01;
    result += (rand() % 10) * 0.001;

    std::cout << std::fixed << std::setprecision(3) << result << std::endl;

    return 0;
}