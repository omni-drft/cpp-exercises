#include <iostream>
#include <vector>

int main () {

    std::vector<int> v1 {1, 3, 5, 7, 9};
    std::vector<int> v2 {1, 4, 7, 11, 15};
    std::vector<int> v3 {1, 2, 3, 4, 5, 6, 7, 8, 9, 20};


    // ad. 1
    std::cout << "ad. 1" << std::endl << std::endl;
    std::vector<int> result1 {};
    for (int i : v1) {
        for (int j : v2) {
            if (i == j) {
                result1.push_back(i);
            }
        }
    }

    for (int i : result1) {
        std::cout << i << " ";
    }
    std::cout << std::endl << std::endl;


    // ad. 2
    std::cout << "ad. 2" << std::endl << std::endl;
    std::vector<int> result2 {};
    bool is_in = false;
    for (int i : v3) {
        for (int j : result1) {
            if (i == j)
                is_in = true;
        }
        if (!is_in)
            result2.push_back(i);
        is_in = false;
    }

    for (int i : result2) {
        std::cout << i << " ";
    }
    std::cout << std::endl << std::endl;

    // ad. 3
    std::cout << "ad. 3" << std::endl << std::endl;
    std::vector<int> result3 {};
    for (int i : v1) {
        for (int j : v2) {
            for (int k : v3) {
                if (i == j && j == k)
                    result3.push_back(i);
            }
        }
    }

    for (int i : result3) {
        std::cout << i << " ";
    }
    std::cout << std::endl << std::endl;
    return 0;
}