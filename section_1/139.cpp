#include <iostream>
#include <vector>
#include <unordered_map>

int main() {

    std::vector<char> znaki = { 
        'x','P','Q','4','\n','%','u','@','e',
        'T','B','$','!',':','"','1','<','d',
        'k','L','$',')','$','B','x','w','q',
        'P','c','X','B','>','?','[','r','x',
        '$','#','}','|','d','l','n','b','V','!'
    };

    std::unordered_map<char, int> map {};

    for (std::vector<char>::iterator it{znaki.begin() + 1}; it != znaki.end() - 1; ++it)
        map[*it]++;

    for (auto const &pair : map) {
        if (pair.second >= 2)
            std::cout << pair.first << std::endl;
    }

    int sum {};
    for (char i : znaki) {
        if(i >= '0' && i <= '9')
            sum += i - '0';
    }
        
    std::cout << std::endl << sum << std::endl;
            

    return 0;
}