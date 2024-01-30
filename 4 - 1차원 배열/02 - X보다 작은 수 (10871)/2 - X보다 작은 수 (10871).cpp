#include <iostream>

int main()
{
	int num, maxNum;

	std::cin >> num >> maxNum;

	int* arr = new int[num];

	for (int i = 0; num > i; i++)
	{
		std::cin >> arr[i];

		if (arr[i] < maxNum)
		{
			std::cout << arr[i] << " ";
		}
	}

	return 0;
}