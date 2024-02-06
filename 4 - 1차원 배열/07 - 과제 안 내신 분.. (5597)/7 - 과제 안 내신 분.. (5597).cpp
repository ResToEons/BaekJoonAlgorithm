#include <iostream>
#define STUDENT_NUM 28
#define MAX_STUDENT 30
int main()
{
	bool* isExist = new bool[MAX_STUDENT];
	int* arr = new int[STUDENT_NUM];
	int temp;

	for (int i = 0; MAX_STUDENT > i; i++)
	{
		isExist[i] = false;
	}

	for (int i = 0; STUDENT_NUM > i; i++)
	{
		std::cin >> arr[i];

		isExist[arr[i]] = true;
	}

	for (int i = 1; MAX_STUDENT >= i; i++)
	{
		if (!isExist[i])
		{
			std::cout << i << std::endl;
		}
	}

	return 0;
}