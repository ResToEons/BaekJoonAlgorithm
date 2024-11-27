#include <iostream>

int main()
{
	int a, b, c;
	int sum = 1;
	int max = 1;

	while (sum != 0)
	{
		std::cin >> a >> b >> c;

		sum = a + b + c;

		// Exit condition
		if (sum == 0)
			break;

		// Check triangle condition
		if (a > b && a > c)
		{
			if (a >= b + c)
			{
				std::cout << "Invalid" << std::endl;
				continue;
			}
		}
		else if (b > a && b > c)
		{
			if (b >= a + c)
			{
				std::cout << "Invalid" << std::endl;
				continue;
			}
		}
		else
		{
			if (c >= a + b)
			{
				std::cout << "Invalid" << std::endl;
				continue;
			}
		}

		// Equilateral Condition
		if (a == b && b == c)
		{
			std::cout << "Equilateral" << std::endl;
		}
		// Isosceles Condition
		else if ((a != b && a == c) || (a == b && a != c) || (b == c && b != a))
		{
			std::cout << "Isosceles" << std::endl;
		}
		// Scalene Condition
		else
		{
			std::cout << "Scalene" << std::endl;
		}
		
	}

	return 0;
}