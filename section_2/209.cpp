#include <iostream>
#include <iomanip>
#include <cmath>
#include <random>

int main() {

    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<double> dist(-1, 1);
    
    double tab[20] {};

    for (size_t i{}; i < 20; i++) {
        double number = dist(mt);
        double factor = 1000;
        number = std::round(number * factor) / factor;
        tab[i] = number;
        // std::cout << number << std::endl;
    }

    double sum {};
    for (size_t i{}; i < 20; i++)
        sum += tab[i];
    
    double result {sum / 20.0};

    std::cout << std::fixed << std::setprecision(3) << result << std::endl;

    return 0;
}