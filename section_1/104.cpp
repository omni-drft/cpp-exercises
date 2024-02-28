#include <iostream>

int main() {
    char n {};
    std::cin >> n;

    switch (n) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            std::cout << "Cyfra" << std::endl;
            break;
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
            std::cout << "Samogłoska" << std::endl;
            break;
        default:
            std::cout << "Spółgłoska" << std::endl;
    }

    return 0;
}