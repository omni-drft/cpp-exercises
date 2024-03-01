#include <iostream>
#include <vector>

int main() {

    std::vector<int> nums {};

    int num {};
    int i {};
    while (true) {
        std::cin >> num;
        nums.push_back(num);
        if (i > 0) {
            if (nums.at(i) == nums.at(i-1)) {
                break;
            }
        }
        i++;
    }
    

    return 0;
}