#include <iostream>

int main()
{
	int N, K;
	int cnt = 0;

	std::cin >> N >> K;

	for (int i = 1; N >= i; i++)
	{
		if (N % i == 0)
		{
			cnt++;
		}
		if (cnt == K)
		{
			std::cout << i;
			return 0;
		}
	}

	if (cnt != K)
		std::cout << "0";

	return 0;
}