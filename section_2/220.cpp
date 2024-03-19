#include <iostream>
#include <random>

int main() {

    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist (7, 21);

    int n {dist(mt)};
    while (n % 2 ==0) { n = dist(mt);}

    std::cout << "The size of the pyramid is " << n << "x" << n << std::endl << std::endl;

    int m {n / 2};
    int k {1};
    for (int i {}; i < (n + 1) / 2; i++) {
        for (int j {}; j < m; j++) 
            std::cout << ' ';
        for (int j {}; j < k; j++)
            std::cout << "#";
        std::cout << std::endl;
        m--;
        k += 2;
    }


    k = n - 2;
    m = 1;
    for (int i {(n + 1) / 2}; i > 0; i--) {
        for (int j {}; j < m; j++) 
            std::cout << ' ';
        for (int j {}; j < k; j++)
            std::cout << "#";
        std::cout << std::endl;
        m++;
        k -= 2;
    }
    
    return 0;
}