#include <iostream>

int main()
{
	int num;
	int findNum = -1;
	int answer = 0;
	std::cin >> num;

	int* arr = new int[num];

	for (int i = 0; num > i; i++)
	{
		std::cin >> arr[i];
	}

	std::cin >> findNum;

	for (int i = 0; num > i; i++)
	{
		if (findNum == arr[i])
		{
			answer++;
		}
	}

	std::cout << answer;

	return 0;
}