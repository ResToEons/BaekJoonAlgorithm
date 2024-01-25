#include <iostream>

int main()
{
	int A = 1, B = 1;

	while (true)
	{
		std::cin >> A >> B;

		if (A == 0 && B == 0)
			break;
		
		std::cout << A + B << std::endl;
	}

	return 0;
}