#include <iostream>

int main()
{
	int num;
	int min = 9999999;
	int max = -9999999;
	std::cin >> num;

	int* arr = new int[num];



	for (int i = 0; num > i; i++)
	{
		std::cin >> arr[i];

		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}

	std::cout << min << " " << max;

	return 0;
}