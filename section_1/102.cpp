#include <iostream>

int main() {
	int num{};
	std::cin >> num;

	if (num % 2 == 0)
		std::cout << "Tak" << std::endl;
	else
		std::cout << "Nie" << std::endl;

	return 0;
}


