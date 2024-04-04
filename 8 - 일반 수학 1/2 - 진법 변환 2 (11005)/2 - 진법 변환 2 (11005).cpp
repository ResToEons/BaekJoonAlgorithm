#include <iostream>
#include <string>

int main()
{
	char sortTemp; 
	int num;
	int radix;
	int temp;
	std::string answer;

	std::cin >> num >> radix;

	while (num >= 1)
	{
		temp = num % radix;

		if (temp > 9)
		{
			temp += 55;
		}
		else
		{
			temp += 48;
		}

		answer.push_back(temp);

		num /= radix;
	}

	for (int i = 0; answer.length()/2 > i; i++)
	{
		sortTemp = answer[i];
		answer[i] = answer[answer.length() - i - 1];
		answer[answer.length() - i - 1] = sortTemp;
	}

	std::cout << answer;

	return 0;
}