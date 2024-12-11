#include <iostream>

int main()
{
	long long num;
	long long sum = 0;

	std::cin >> num;

	for (long long i = 1; num - 1 >= i; i++)
	{
		for (long long j = i + 1; num >= j; j++)
		{
			sum++;
		}
	}

	std::cout << sum << std::endl;
	std::cout << "2";

	return 0;
}