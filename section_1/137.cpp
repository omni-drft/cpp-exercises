#include <iostream>

float multiply(float a, float b) {
    return a / (1 / b);
}

float multiply(float a, int b) {
    bool negative = false;
    if (a < 0) negative = !negative;
    if (b < 0) negative = !negative;

    float result {};
    for (int i {0}; i < b; ++i)
        result += a;
    
    return result;
}



int main() {

    float a {}, b {};
    std::cin >> a >> b;
    float result1 {multiply(a, b)};
    std::cout << result1 << std::endl;

    float c {};
    int d {};
    std::cin >> c >> d;
    float result2 {multiply(c, d)};
    std::cout << result2 << std::endl;

    return 0;
}