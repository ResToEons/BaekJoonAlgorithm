#include <iostream>

int main()
{
	long long A, B, C;

	std::cin >> A >> B >> C;

	if (A < 1)
		return -1;

	std::cout << A + B + C;

	return 0;
}