#include <iostream>

int main()
{
	int year;

	std::cin >> year;

	if (year > 3000 || year < 1000)
		return -1;

	std::cout << year - 543;

	return 0;
}