#include <iostream>

int test() {

	short number;

	std::cout << "������� �����: ";
	std::cin >> number;

	if (number > 5) {
		std::cout << "��������� ����� ������ ��� 5";
	}

	return 0;
}