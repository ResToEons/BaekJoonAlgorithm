#include <iostream>

int main()
{
	int arr[9][9] = { 0 };
	int max = -1;
	int x = -1, y = -1;

	for (int i = 0; 9 > i; i++)
	{
		for (int j = 0; 9 > j; j++)
		{
			std::cin >> arr[i][j];
		}
	}

	for (int i = 0; 9 > i; i++)
	{
		for (int j = 0; 9 > j; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				x = i + 1;
				y = j + 1;
			}
		}
	}

	std::cout << max << std::endl;
	std::cout << x << " " << y;

	return 0;
}