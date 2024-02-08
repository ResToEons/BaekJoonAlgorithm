#include <iostream>

int main()
{
	int N, M;
	int a, b;
	std::cin >> N >> M;

	int* arr = new int[N+1];
	int temp;

	for (int i = 1; N >= i; i++)
	{
		arr[i] = i;
	}

	for (int i = 0; M > i; i++)
	{
		std::cin >> a >> b;

		for (int j = 0; ((b-a)/2 +1) > j; j++)
		{
			temp = arr[a+j];
			arr[a+j] = arr[b-j];
			arr[b-j] = temp;

		}
	}

	for (int i = 1; N >= i; i++)
	{
		if (i != N)
			std::cout << arr[i] << " ";
		else
			std::cout << arr[i];
	}

	return 0;
}