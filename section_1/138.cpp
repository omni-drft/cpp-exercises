#include <iostream>
#include <vector>

int main() {

    std::vector<int> v {
        1,2,3,2,5,6,9,1,3,7,5,8,
        0,9,3,1,2,5,7,6,3,4,2,1,
        0,8,9,7,8,4,6,3,2,5,4,7,
        8,9,1,3,2,5,4,7,5,6,8,0,
        1,2,3,6,5,8,7,1,1,2,3,4,
        4,5,5,6,8,9,0,9,8,1,9,7,
        5,4,1,2,7,6,9,3,4,2,6
    };

    int tempSum {};
    for (int i {}; i < v.size(); ++i) {
        tempSum = v.at(i);
        for (int j {i + 1}; j < v.size(); ++j) {
            tempSum += v.at(j);
            if (tempSum == 10) {
                std::cout << "Subsequence found at index " << i << std::endl;
                std::cout << "Length: " << j - i + 1 << std::endl << std::endl;
                break;
            }
            else if (tempSum > 10) break;
        }
    }

    return 0;
}