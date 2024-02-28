#include <iostream>

int main() {
	unsigned int nums[3] {};
	
	for (int i{0}; i < 3; ++i) {
		std::cin >> nums[i];
	}

	unsigned int high_ind {};
	for (int i{1}; i < 3; ++i) {
		if (nums[i] > nums[high_ind])
			high_ind = i;
	}

	unsigned int sum {};

	for (int i{0}; i < 3; ++i) {
		if (i != high_ind)
			sum += nums[i];
	}

	for (int i{}; i < nums[high_ind]; ++i) {
		std::cout << sum << std::endl;
	}

	return 0;
}