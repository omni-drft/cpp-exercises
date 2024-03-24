#include <iostream>

int main() {

    int n {4};
    int l {3};
    while (l >= 1) {
        int m {n / 2};
        int k {1};
        for (int i {}; i < (n + 1) / 2; i++) {
            for(int j {}; j < l; j++)
                std::cout << ' ';
            for (int j {}; j < m; j++) 
                std::cout << ' ';
            for (int j {}; j < k; j++)
                std::cout << "#";
            std::cout << std::endl;
            m--;
            k += 2;
        }
        l--;
        n += 2;
    }
    return 0;
}