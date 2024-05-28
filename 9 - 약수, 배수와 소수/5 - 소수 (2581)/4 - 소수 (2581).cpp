#include <iostream>
#define PRIMARY_NUM 2

int main()
{
	int M, N;
	int cnt = 0;
	int sum = 0;
	int min = 0;

	std::cin >> M >> N;

	for (int i = M; N >= i; i++)
	{
		for (int j = 1; i >= j; j++)
		{
			if (i % j == 0)
			{
				cnt++;
			}
		}

		if (cnt == PRIMARY_NUM)
		{
			if (sum == 0)
			{
				min = i;
				sum += i;
			}
			else
				sum += i;
		}

		cnt = 0;
	}

	if (sum == 0)
	{
		sum = -1;
		std::cout << sum;
		return 0;
	}
	else
	{
		std::cout << sum << std::endl;
		std::cout << min;
	}


	return 0;
}