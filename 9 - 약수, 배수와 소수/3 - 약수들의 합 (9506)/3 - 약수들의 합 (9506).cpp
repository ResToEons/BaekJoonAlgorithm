#include <iostream>

int main()
{
	int num = 0;
	int sum = 0;
	int max = 0;

	while (true)
	{
		std::cin >> num;

		if (num == -1)
			break;

		for (int i = 1; num > i; i++)
		{
			if (num % i == 0)
			{
				sum += i;
				max = i;
			}
		}

		if (sum == num)
		{
			std::cout << sum << " = ";

			for (int i = 1; num > i; i++)
			{
				if (num % i == 0)
				{
					if (max != i)
						std::cout << i << " + ";
					else
						std::cout << i << std::endl;
				}
			}
		}
		else
		{
			std::cout << num << " is NOT perfect." << std::endl;
		}

		sum = 0;
		max = 0;
	}

	return 0;
}