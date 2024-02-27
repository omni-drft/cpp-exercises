#include <iostream>

int main() {
	int num{};
	std::cin >> num;

	if (num % 3 == 0 && num % 5 == 0)
		std::cout << "Podzielna przez 3 i przez 5" << std::endl;
	else if (num % 3 == 0 && num % 5 != 0)
		std::cout << "Podzielna przez 3 i nie przez 5" << std::endl;
	else if (num % 3 != 0 && num % 5 == 0)
		std::cout << "Nie podzielna przez 3 i podzielna przez 5" << std::endl;
	else
		std::cout << "Nie podzielna przez 3 i 5" << std::endl;

	return 0;
}