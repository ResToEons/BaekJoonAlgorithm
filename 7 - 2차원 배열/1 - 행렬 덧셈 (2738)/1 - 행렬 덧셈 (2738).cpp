#include <iostream>

int main()
{
	int x, y;

	std::cin >> y >> x;

	int** arr = new int* [y];
	int** arr2 = new int* [y];

	for (int i = 0; y > i; i++)
	{
		arr[i] = new int[x];
		arr2[i] = new int[x];
	}

	for (int i = 0; y > i; i++)
	{
		for (int j = 0; x > j; j++)
		{
			std::cin >> arr[i][j];
		}
	}

	for (int i = 0; y > i; i++)
	{
		for (int j = 0; x > j; j++)
		{
			std::cin >> arr2[i][j];
		}
	}

	for (int i = 0; y > i; i++)
	{
		for (int j = 0; x > j; j++)
		{
			arr2[i][j] += arr[i][j];
		}
	}

	for (int i = 0; y > i; i++)
	{
		for (int j = 0; x > j; j++)
		{
			std::cout << arr2[i][j] << " ";
		}

		if (i == y - 1)
		{

		}
		else
			std::cout << std::endl;
	}

	for (int i = 0; y > i; i++)
	{
		delete[] arr[i];
		delete[] arr2[i];
	}

	delete[] arr;
	delete[] arr2;

	return 0;
}