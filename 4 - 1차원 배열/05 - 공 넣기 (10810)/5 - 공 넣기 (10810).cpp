#include <iostream>

int main()
{
	int N, M;
	int i, j, k;
	std::cin >> N >> M;

	int* arr = new int[N+1];

	for (int a = 1; N+1 > a; a++)
		arr[a] = 0;

	for (int a = 0; M > a; a++)
	{
		std::cin >> i >> j >> k;

		for (int b = i; j >= b; b++)
		{
			arr[b] = k;
		}
	}

	for (int a = 1; N+1 > a; a++)
	{
		std::cout << arr[a] << " ";
	}

	return 0;
}