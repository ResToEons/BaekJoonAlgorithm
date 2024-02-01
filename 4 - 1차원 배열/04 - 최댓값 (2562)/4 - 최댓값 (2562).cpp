#include <iostream>

int main()
{
	int num;
	int max = -999999;
	int idx = 0;

	num = 9;

	int* arr = new int[num];

	for (int i = 0; num > i; i++)
	{
		std::cin >> arr[i];

		if (arr[i] > max)
		{
			max = arr[i];
			idx = i + 1;
		}
	}

	std::cout << max << std::endl;
	std::cout << idx << std::endl;

	return 0;
}