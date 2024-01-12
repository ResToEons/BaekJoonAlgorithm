#include <iostream>

int main()
{
	int num;
	int A, B;

	std::cin >> num;

	for (int i = 0; num > i; i++)
	{
		std::cin >> A >> B;

		std::cout << A + B << std::endl;
	}

	return 0;
}