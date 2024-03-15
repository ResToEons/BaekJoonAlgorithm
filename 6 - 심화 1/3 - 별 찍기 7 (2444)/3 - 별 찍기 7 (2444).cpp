#include <iostream>

int main()
{
	int num;
	int length;
	int idx;

	std::cin >> num;
	
	length = num * 2;
	idx = num - 1;
	for (int i = 1; num > i; i++)
	{
		for (int j = 0; length >= j; j++)
		{	
			if (idx + i <= j)
				break;
			if (j > idx - i && j < idx + i)
				std::cout << "*";
			else
				std::cout << " ";
		}

		std::cout << std::endl;
	}

	for (int i = num; i > 0; i--)
	{
		for (int j = 0; length >= j; j++)
		{
			if (idx + i <= j)
				break;
			if (j > idx - i && j < idx + i)
				std::cout << "*";
			else
				std::cout << " ";
		}
		
		if (i != 1)
			std::cout << std::endl;
	}

	return 0;
}