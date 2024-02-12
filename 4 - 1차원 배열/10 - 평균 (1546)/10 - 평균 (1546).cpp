#include <iostream>

int main()
{
	int num;
	double inputNum;
	int maxNum = 0;

	double avg = 0.0;
	std::cin >> num;

	double* arr = new double[num];

	for (int i = 0; num > i; i++)
	{
		std::cin >> inputNum;

		if (maxNum < inputNum)
			maxNum = inputNum;
		
		arr[i] = inputNum;
	}

	for (int i = 0; num > i; i++)
	{
		avg += arr[i]/maxNum * 100;

	}

	avg /= num;

	std::cout << avg;

	return 0;
}