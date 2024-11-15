#include <iostream>

int main()
{
	int num;
	int x, y;
	int minX = 100001, minY = 100001;
	int maxX = -100001, maxY = -100001;

	std::cin >> num;

	for (int i = 0; num > i; i++)
	{
		std::cin >> x >> y;

		if (x > maxX)
			maxX = x;
		if (x < minX)
			minX = x;

		if (y > maxY)
			maxY = y;
		if (y < minY)
			minY = y;
	}

	
	std::cout << (maxX - minX) * (maxY - minY);

	return 0;
}