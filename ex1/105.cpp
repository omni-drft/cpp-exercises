#include <iostream>

int main() {
    float a1 {}, a2 {}, a3 {}, a4 {}, a5 {};
    std::cin >> a1 >> a2 >> a3 >> a4 >> a5;
    
    float result {(((a1 + a2) * a3) - a4) / a5};
    std::cout << result << std::endl;

    return 0;
}