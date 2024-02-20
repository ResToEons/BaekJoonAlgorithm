#include <iostream>
#include <string>

int main()
{
	int num;
	int sum = 0;
	std::string input;
	
	std::cin >> num;
	std::cin >> input;

	for (int i = 0; num > i; i++)
	{
		sum += (int)input[i] -48;
	}

	std::cout << sum;

	return 0;
}