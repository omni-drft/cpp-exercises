#include <iostream>
#include <random>
#include <vector>

int main () {

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, 20);
    std::uniform_int_distribution<int> dis2(0, 19);

    std::vector<int> vec {};
    vec.reserve(20);
    for(int i {}; i < 20; i++) {
        vec.push_back(-1);
    }
    
    int count {0};
    while (count < 20) {
       int num {dis(gen)};
       int index {dis2(gen)};
       if (vec.at(index) == -1) {
           vec.at(index) = num;
           count++;
       }
    }

    std::cout << "The vector is: " << std::endl;
    for (int i : vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}