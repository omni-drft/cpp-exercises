#include <iostream>
#include <vector>

int main() {

    std::vector<int> v {32, 154, 97, 145, 44, 67, 89, 23, 78, 56};

    for(std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        std::cout << *it << std::endl;

    return 0;
}