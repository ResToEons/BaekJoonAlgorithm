#include <iostream>
#include <string>
#include <cctype>
#include <cmath>

int main()
{
	int radix; // 2 <= radix <= 36
	int numDigit = 0;
	int temp = 0;
	int answer = 0;
	std::string num;

	std::cin >> num >> radix;

	numDigit = num.length();

	for (int i = 0; numDigit > i; i++)
	{
		if (isdigit(num[i]) == 0)
		{
			temp = num[i] - 55;
		}
		else
			temp = num[i] - 48;

		answer += pow(radix, numDigit - i - 1) * temp;
	}

	std::cout << answer;

	return 0;
}