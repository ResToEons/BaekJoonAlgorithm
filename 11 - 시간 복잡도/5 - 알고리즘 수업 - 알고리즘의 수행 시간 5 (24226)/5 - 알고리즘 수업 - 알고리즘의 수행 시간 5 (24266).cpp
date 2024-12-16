#include <iostream>

int main()
{
	long long num;
	long long sum = 0;

	std::cin >> num;

	for (long long i = 1; num >= i; i++)
	{
		for (long long j = 1; num >= j; j++)
		{
			for (long long k = 1; num >= k; k++)
			{
				sum++;
			}
		}
	}

	std::cout << sum << std::endl;
	std::cout << "3";

	return 0;
}