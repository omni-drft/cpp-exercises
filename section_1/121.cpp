#include <iostream>

int main() {

    int nums[5] {};

    bool isBigger {true};

    for (int i {}; i < 5; i++) {
        std::cin >> nums[i];
        if (i > 0) {
            if (nums[i] < nums[i - 1]) {
                isBigger = false;
            }
        }
    }

    if (isBigger)
        std::cout << "The array is sorted in ascending order." << std::endl;

    return 0;
}