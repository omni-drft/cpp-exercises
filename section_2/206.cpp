#include <iostream>
#include <random>
#include <vector>

int main() {

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(-10, 10);

    std::vector<int> v(10);

    for(size_t i{}; i < 10; i++)
        v.at(i) = dis(gen);

    size_t odd_count {};
    size_t even_count {};
    size_t positive_count {};
    size_t negative_count {};

    for(int i : v) {
        if (i > 0)
            positive_count++;
        else if (i < 0)
            negative_count++;
        if (i % 2 == 0)
            even_count++;
        else
            odd_count++;
    }

    std::cout << "Odd numbers: " << odd_count << std::endl;
    std::cout << "Even numbers: " << even_count << std::endl;
    std::cout << "Positive numbers: " << positive_count << std::endl;
    std::cout << "Negative numbers: " << negative_count << std::endl;

    return 0;
}