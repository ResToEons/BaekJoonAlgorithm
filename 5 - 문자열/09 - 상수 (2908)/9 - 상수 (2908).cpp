#include <iostream>
#include <string>

int main()
{
	std::string num1, num2;
	std::string temp;

	std::cin >> num1 >> num2;

	temp = num1;

	for (int i = 0; num1.length() > i; i++)
	{
		temp[i] = num1[num1.length() - i - 1];
	}

	num1 = temp;

	temp = num2;

	for (int i = 0; num2.length() > i; i++)
	{
		temp[i] = num2[num2.length() - i - 1];
	}

	num2 = temp;

	if (num1 > num2)
		std::cout << num1;
	else
		std::cout << num2;

	return 0;
}