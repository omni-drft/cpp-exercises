#include <iostream>
#include <random>
#include <vector>

int high(std::vector<int>& vec);

int main() {

    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<int> distribution(1, 10);

    std::vector<int> vec {};
    vec.reserve(3);

    for (int i = 0; i < 3; i++)
        vec.push_back(distribution(generator));
    
    std::cout << std::endl;
    
    int max {high(vec)};
    int sum {0};
    for (int i : vec)
        sum += i;
    for(int i {0}; i < max; i++)
        std::cout << sum << std::endl;

    return 0;
}

int high(std::vector<int>& vec) {
    int max {vec[0]};
    int index {0};
    for (int i {1}; i < vec.size(); i++) {
        if (vec[i] > max) {
            max = vec[i];
            index = i;
        }
    }
    vec.erase(vec.begin() + index);
    return max;
}