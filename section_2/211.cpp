#include <iostream>

int main() {
    
    int n {};
    std::cin >> n;
    int z {n & 1};

    if (z == 0)
        std::cout << "even" << std::endl;
    else
        std::cout << "odd" << std::endl;

    return 0;
}

// 00110011
// &
// 00000001
// =
// 00000001
// odd


// 00110010
// &
// 00000001
// =
// 00000000
// even
