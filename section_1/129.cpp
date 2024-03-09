#include <iostream>
#include <vector>

int main () {

    std::vector<bool> diet {
        1,1,0,1,0,0,0,0,0,1,1,1,1,1,0,1,0,0,
        1,0,1,1,0,0,0,1,1,0,0,1,1,1,0,0,1,0,
        0,0,0,0,1,1,0,0,0,1,1,1,1,1,0,0,0,1,
        1,0,1,0,1,0,0,0,1,0,0,0,0,1,0,1,1,1,
        1,1,1,1,1,0,0,1,0,0,1,1,1,0,1,0,0,1,
        1,0,1,0,0,1,1,0,1,1,1,0,0,0,0,1,0,0,
        0,1,1,0,1,0,1,1,0,1,0,1,1,1,1,1,1,0,
        0,1,0,0,1,1,1,0,0,1,0,0,1,1,0,1,0,0,
        1,1,0,0,1,0,1,0,1,1,0,1,1,0,0,1,1,0,
        0,1,0,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,
        1,1,0,0,1,0,0,0,1,0,0,1,1,0,1,0,1,0,
        1,0,1,0,1,1,0,1,1,1,0,0,1,1,0,0,1,0,
        0,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,0,0,
        1,1,1,1,1,1,1,0,1,0,1,0,0,0,1,1,0,0,
        0,1,0,0,0,0,1,1,0,1,0,1,1,0,0,0,1,1,
        1,1,0,1,0,0,1,0,1,1,0,0,1,0,0,0,1,0,
        0,0,0,0,1,1,0,1,1,1,1,0,1,0,0,1,1,1,
        1,0,0,0,1,0,0,1,0,1,1,1,1,0,0,1,1,1,
        0,0,0,1,1,1,1,0,0,1,0,0,0,1,1,1,1,0,
        0,0,1,1,0,1,0,1,0,0,1,1,1,1,1,0,1,0,
        1,1,1,1,1
    };

    // ad. 1
    int result1 {};
    for (int i : diet)
        if (i) result1++;
    
    std::cout << "ad. 1" << std::endl << std::endl;
    std::cout << result1 << std::endl << std::endl;

    // ad. 2
    int result2 {};
    int counter {};
    for (int i : diet) {
        if (i) {
            counter++;
            if (counter == 5) result2++;
        }
        else counter = 0;
    }
    std::cout << "ad. 2" << std::endl << std::endl;
    std::cout << result2 << std::endl << std::endl;


    return 0;
}