#include <iostream>

int main()
{
	long long num;
	long long ans = 0;
	std::cin >> num;

	for (long long i = 1; num >= i; i++)
	{
		for (long long j = 1; num >= j; j++)
			ans++;
	}

	std::cout << ans << std::endl;
	std::cout << "2";

	return 0;
}