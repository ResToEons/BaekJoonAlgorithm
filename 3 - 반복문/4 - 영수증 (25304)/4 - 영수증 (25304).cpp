#include <iostream>

int main()
{
	int totalCost;
	int num;
	int cost;
	int count;
	int tempCost = 0;

	std::cin >> totalCost;

	std::cin >> num;

	for (int i = 0; num > i; i++)
	{
		std::cin >> cost >> count;
		tempCost += (cost * count);
	}

	if (tempCost == totalCost)
	{
		std::cout << "Yes";
	}
	else
		std::cout << "No";

	return 0;
}