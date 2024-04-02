#include <iostream>

int main()
{
	int num;
	int x = 0, y = 0;
	int ans = 0;
	int arr[100][100] = { 0 };

	std::cin >> num;

	for (int i = 0; num > i; i++)
	{
		std::cin >> x >> y;
		
		for (int j = 0; 10 > j; j++)
		{
			for (int k = 0; 10 > k; k++)
			{
				arr[j + x][k + y] = 1;
			}
		}
	}

	for (int i = 0; 100 > i; i++)
	{
		for (int j = 0; 100 > j; j++)
		{
			if (arr[i][j] == 1)
				ans++;
		}
	}

	std::cout << ans;

	return 0;
}