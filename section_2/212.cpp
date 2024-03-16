#include <iostream>

double func(int a, int b);

int main() {
    
    int a{}, b{};
    std::cin >> a >> b;

    std::cout << func(a, b) << std::endl;
    
    return 0;
}

double func(int a, int b) {
    double c {static_cast<double>(abs(b))};

    int i {10};
    while (c >= i) i *= 10;

    return a + (c / i);
}