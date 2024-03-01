#include <iostream>
#include <vector>

int main() {

    std::vector<int> nums {};
    int n {};
    bool found = false;

    while (nums.size() <= 10) {
        std::cin >> n;
        for (int i = 0; i < nums.size(); i++) {
            if (n == nums.at(i)) {
                found = true;
                break;
            }
        }
        if (!found) 
            nums.push_back(n);
        found = false;
    }
    

    return 0;
}