#include <iostream>

const float TOLERANCE {0.00001};

int main() {
    float a {}, b {}, c {};
    std::cin >> a >> b >> c;
    if (a*a + b*b - c*c < TOLERANCE)
        std::cout << "Right triangle" << std::endl;
}