#include <iostream>
#include <random>

int main () {

    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<int> distribution(65, 90);
    std::uniform_int_distribution<int> distribution2(1, 2);

    int amount {}, ran1 {}, ran2{};
    char letter {};
    while (letter != 'z') {
        ran1 = distribution(generator);
        ran2 = distribution2(generator);
        if(ran2 == 1)
            letter = ran1;
        else
            letter = ran1 + 32;
        amount++;
    }

    std::cout << amount << std::endl;

    return 0;
}