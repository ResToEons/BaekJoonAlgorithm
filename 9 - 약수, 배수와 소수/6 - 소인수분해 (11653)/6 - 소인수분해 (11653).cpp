#include <iostream>

int main()
{
	int num;

	std::cin >> num;

	while (num != 1)
	{
		for (int i = 2; num >= i; i++)
		{
			if (num % i == 0)
			{
				std::cout << i;

				num /= i;

				break;
			}
		}
		if (num != 1)
			std::cout << std::endl;
	}

	return 0;
}