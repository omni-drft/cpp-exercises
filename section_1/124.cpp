#include <iostream>
#include <vector>

int main() {

    std::vector<char> signs {};
    char sign {};
    while(true) {
        std::cin >> sign;
        if (sign == '!')
            break;
        else if (sign == '*' && signs.size() > 0)
            signs.erase(signs.begin());
        else if (sign == '#' && signs.size() > 0)
            signs.pop_back();
        else if (
            sign == 'a' || sign == 'e' || 
            sign == 'i' || sign == 'o' || 
            sign == 'u' || sign == 'y')
            signs.insert(signs.begin(), sign);
        else if (sign != '*' && sign != '#')
            signs.push_back(sign);
    }

    return 0;
}