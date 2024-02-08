#include <iostream>
#define NUM 10
#define DIV_NUM 42

int main()
{
	int answer = 0;
	int temp;
	int* arr = new int[DIV_NUM];

	for (int i = 0; DIV_NUM > i; i++)
	{
		arr[i] = 0;
	}

	for (int i = 0; NUM > i; i++)
	{
		std::cin >> temp;

		arr[temp % DIV_NUM]++;
	}

	for (int i = 0; DIV_NUM > i; i++)
	{
		if (arr[i] != 0)
		{
			answer++;
		}
		else
		{
			// Do Nothing
		}
	}

	if (answer == 0)
		answer = 1;

	std::cout << answer;

	return 0;
}