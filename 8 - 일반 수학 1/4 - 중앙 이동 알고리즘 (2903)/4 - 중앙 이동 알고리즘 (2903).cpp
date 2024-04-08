#include <iostream>

int main()
{
	int num;
	int xDots = 2, yDots = 2;
	std::cin >> num;

	while (num != 0)
	{
		xDots = xDots * 2 - 1;
		yDots = yDots * 2 - 1;

		num--;
	}

	std::cout << xDots * yDots;

	return 0;
}