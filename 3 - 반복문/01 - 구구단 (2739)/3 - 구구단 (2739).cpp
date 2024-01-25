#include <iostream>

int main()
{
	int num;
	int ten = 10;

	std::cin >> num;

	for (int i = 1; ten > i; i++)
	{
		std::cout << num << " * " << i << " = " << num * i<< std::endl;
	}

	return 0;
}