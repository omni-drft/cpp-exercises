#include <iostream>
#include <vector>
#include <unordered_map>

int main() {

    std::vector<int> v {
        1, 2, 4, 3, 
        6, 8, 7, 7, 
        8, 3, 4, 5, 
        6, 7, 1, 3, 
        9, 1, 0, 4, 
        2, 3, 6, 9
    };

    // ad. 1

    std::cout << std::endl << "ad. 1" << std::endl;
    int subseq {};

    for (int i {2}; i < v.size(); i++) {
        if (v.at(i-2) + 1 == v.at(i - 1) && v.at(i-1) + 1 == v.at(i)) {
            subseq++;
            std::cout << subseq << ": " << v.at(i-2) << " " << v.at(i-1) << " " << v.at(i) << std::endl;
        }
    }
    std::cout << std::endl;

    // ad. 2
    std::cout << "ad. 2" << std::endl;

    int start {}, length {1}, max_length {}, max_start {};
    for (int i {}; i < v.size() - 1; i++) {
        if (v.at(i) + 1 == v.at(i + 1)) {
            if (length == 1)
                start = i;
            length++;
        }
        else {
            if (length > max_length) {
                max_length = length;
                max_start = start;
            }
            length = 1;
        }
    }

    for (int i {max_start}; i < max_start + max_length; i++) {
        std::cout << v.at(i) << " ";
    }
    std::cout << std::endl << std::endl;

    // ad. 3
    std::cout << "ad. 3" << std::endl;
    std::unordered_map<int, int> m {};
    for (int i : v) {
        m[i]++;
    }

    for (auto [key, value] : m) {
        std::cout << key << " " << value << std::endl;
    }

    std::cout << std::endl;
    return 0;
}