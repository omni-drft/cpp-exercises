#include <iostream>

int main() {

    std::string name {"Piotr"};    
    for (char i : name) {
        if( i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' || i == 'y')
            std::cout << name << std::endl;
    }

    return 0;
}