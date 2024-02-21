#include <iostream>
#include <string>

int main()
{
	int num;
	int numA;
	std::string str;

	std::cin >> num;

	for (int i = 0; num > i; i++)
	{
		std::cin >> numA;
		std::cin >> str;

		for (int k = 0; str.length() > k; k++)
		{
			for (int j = 0; numA > j; j++)
			{
				std::cout << str[k];
			}
		}
		std::cout << std::endl;
	}

	return 0;
}