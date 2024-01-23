#include <iostream>

int main()
{
	int num;

	std::cin >> num;

	for (int i = 0; num > i; i++)
	{
		for (int j = 0; i >= j; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	return 0;
}