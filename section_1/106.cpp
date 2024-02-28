#include <iostream>

int main() {
    int nums[5] {};
    for (int i = 0; i < 5; i++) {
        std::cin >> nums[i];
    }

    int odd{}, even{};
    for (int i = 0; i < 5; i++) {
        if (nums[i] % 2 == 0)
            even++;
        else
            odd++;
        
    }
    std::cout << "Parzyste: " << even << ", nieparzyste: " << odd << std::endl;
    return 0;
}