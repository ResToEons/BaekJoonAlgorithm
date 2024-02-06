#include <iostream>

int main()
{
	int N, M;
	int a, b;
	int temp = 0;

	std::cin >> N >> M;

	int* arr = new int[N];

	for (int i = 0; N > i; i++)
	{
		arr[i] = i+1;
	}

	for (int i = 0; M > i; i++)
	{
		std::cin >> a >> b;

		temp = arr[a-1];
		arr[a-1] = arr[b-1];
		arr[b-1] = temp;
	}

	for (int i = 0; N > i; i++)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}