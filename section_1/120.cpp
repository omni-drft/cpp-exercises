#include <iostream>
#include <vector>

int main() {

    std::vector<int> nums {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> nums2 {};

    for (int i : nums) {
        if (i % 2 == 0)
            nums2.push_back(i);
    }

    for (int i : nums) {
        if (i % 2 != 0)
            nums2.push_back(i);
    }

    for (int i : nums) {
        std::cout << i << std::endl;
    }
    
    std::cout << "----------------" << std::endl;

    for (int i : nums2) {
        std::cout << i << std::endl;
    }
    

    return 0;
}