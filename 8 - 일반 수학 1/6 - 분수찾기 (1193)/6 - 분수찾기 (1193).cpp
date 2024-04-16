#include <iostream>

int main()
{
	int num;
	int x, y;
	int idx = 0;

	x = y = 1;

	std::cin >> num;

	for (int i = 1; num > i; i++)
	{
		switch (idx)
		{
		case 0:
			x++;
			idx = 1;
			break;
		case 1:
			y++;
			x--;
			if (x == 1)
			{
				idx = 2;
			}
			break;
		case 2:
			y++;
			idx = 3;
			break;
		case 3:
			y--;
			x++;
			if (y == 1)
				idx = 0;
			break;
		default:
			std::cout << "Reached default value" << std::endl;
			break;
		}
	}

	std::cout << y << "/" << x;

	return 0;
}