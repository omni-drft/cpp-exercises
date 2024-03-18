#include <iostream>
#include <random>
#include <vector>

std::vector<int> func();

int main() {

    std::vector<int> v {func()};
    for (auto i : v)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}

std::vector<int> func() {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(1, 1000);

    int i {dist(mt)};
    std::vector<int> v;

    while (i != 1000) {
        dist.param(std::uniform_int_distribution<int>::param_type(i, 1000));
        v.push_back(i);
        i = dist(mt);
    }

    return v;
}