#include <iostream>

int test() {

	short number;

	std::cout << "¬ведите число: ";
	std::cin >> number;

	if (number > 5) {
		std::cout << "¬веденное число больше чем 5";
	}

	return 0;
}