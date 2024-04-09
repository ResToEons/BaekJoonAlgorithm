#include <iostream>

int main()
{
	int pattern = 0;
	int temp = 2;
	int num; 
	int answer = 1;
	int hexagon = 6;
	int abc = 1;
	std::cin >> num;

	while (num > answer)
	{
		answer = (hexagon * pattern) + 1;

		pattern = pattern + abc;
		abc++;
	}

	if (abc != 1)
		abc--;

	std::cout << abc;
	
	return 0;
}