#include <iostream>

int fibo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main() {

    for (int i {1}; i <= 13; i++)
        std::cout << i << "  " << fibo(i) << std::endl;

    return 0;
}