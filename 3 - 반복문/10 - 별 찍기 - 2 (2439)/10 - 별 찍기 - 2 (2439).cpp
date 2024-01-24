#include <iostream>

int main()
{
	int num;

	std::cin >> num;

	for (int i = num; i > 0; i--)
	{
		for (int j = 0; num > j; j++)
		{
			if (j < i-1)
				std::cout << " ";
			else
				std::cout << "*";
		}
		std::cout << std::endl;
	}

	return 0;
}