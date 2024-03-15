#include <iostream>
#include <random>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, 100);

    int n {};
    size_t count {};
    while(n != 100) {
        n = dis(gen);
        std::cout << n << std::endl;
        count++;
    }

    std::cout << "Generated 100 after " << count << " numbers." << std::endl;


    return 0;
}

