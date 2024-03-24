#include <iostream>

float potegaIter(float x, int n);
float potegaRekur(float x, int n);

int main() {

    std::cout << "Iteracyjnie: " << potegaIter(2.5, -6) << std::endl;
    std::cout << "Rekurencyjnie: " << potegaRekur(2.5, -6) << std::endl;

    return 0;
}

float potegaIter(float x, int n) {
    bool negative {n < 0};
    int potega {negative ? -n : n};
    float wynik {1};
    for (int i {}; i < potega; i++) 
        wynik *= x;
    return negative ? 1 / wynik : wynik;
}

float potegaRekur(float x, int n) {
    if (n < 0)
        return 1 / potegaRekur(x, -n);
    return n == 0 ? 1 : x * potegaRekur(x, n - 1);
}