#include <iostream>
#define MAX_NUM 1000
#define PRIME_NUMBER 2
int main()
{
	int num;
	int cnt = 0;
	int answer = 0;
	std::cin >> num;

	int* arr = new int[num];

	for (int i = 0; num > i; i++)
	{
		std::cin >> arr[i];
	}

	for (int i = 0; num > i; i++)
	{
		for (int j = 1; arr[i] >= j; j++)
		{
			if (arr[i] % j == 0)
			{
				cnt++;
			}
		}

		if (cnt == PRIME_NUMBER)
		{
			answer++;
		}

		cnt = 0;
	}

	std::cout << answer;

	return 0;
}