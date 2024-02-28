#include <iostream>

int main() {
    float a {}, b {};
    char op {};

    std::cin >> a >> op >> b;

    switch (op) {
        case '+':
            std::cout << a + b << std::endl;
            break;
        case '-':
            std::cout << a - b << std::endl;
            break;
        case '*':
            std::cout << a * b << std::endl;
            break;
        case '/':
            if (b == 0) {
                std::cout << "Error: Dividing by 0" << std::endl;
            } else {
                std::cout << a / b << std::endl;
            }
            break;
        default:
            std::cout << "Error: Wrong operator" << std::endl;
            break;
    }
    
    return 0;
}