#include <iostream>
#include <random>

int main() {

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, 1000);

    int nums[20] {};
    int highest[3] {};

    for(size_t i{}; i < 20; i++)
        nums[i] = dis(gen);
    
    size_t highest_index {};
    for (size_t i{}; i < 3; i++) {
        for(size_t i{1}; i < 20; i++) {
            if(nums[i] > nums[highest_index])
                highest_index = i;
        }
        highest[i] = nums[highest_index];
        nums[highest_index] = 0;
        highest_index = 0;
    }

    for(int i : highest)
        std::cout << i << std::endl;
        
    return 0;
}