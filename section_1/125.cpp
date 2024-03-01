#include <iostream>
#include <vector>


int main() {

    std::vector<int> v {};
    int n {}, i {};
    int mult {};

    while(true) {
        std::cin >> n;
        v.push_back(n);
        std::cin >> n;
        v.push_back(n);
        i += 2;
        mult = v.at(i-2) * v.at(i-1);
        if (mult > 1000)
            break;
        else {
            v.push_back(mult);
            i++;
        }

    }

    return 0;
}