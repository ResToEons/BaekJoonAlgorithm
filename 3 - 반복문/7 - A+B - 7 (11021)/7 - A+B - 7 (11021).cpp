#include <iostream>

int main()
{
	int num;
	int A, B;

	std::cin >> num;

	for (int i = 1; num >= i; i++)
	{
		std::cin >> A >> B;

		if (A < 0 || B > 10)
		{
			return -1;
		}

		std::cout << "Case #" << i << ": " << A + B << std::endl;
	}

	return 0;
}