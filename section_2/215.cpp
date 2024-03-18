#include <iostream>
#include <random>
#include <vector>

int main() {

    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(10, 100);
    //generate a random number in range of int
    std::uniform_int_distribution<int> dist2;

    int i {dist(mt)};
    std::vector<int> v(i);

    for (int j {}; j < i; j++)
        v.at(j) = dist2(mt);

    for (int j {}; j < i; j++) {
        if (v.at(j) % 2 == 0)
            v.at(j) = 0;
        else
            v.at(j) *= (-1);
    }

    for (auto k : v)
        std::cout << k << std::endl;
        

    return 0;
}