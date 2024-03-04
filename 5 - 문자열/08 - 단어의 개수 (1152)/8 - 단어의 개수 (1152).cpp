#include <iostream>
#include <string>

int main()
{
	int spaceNum = 0;
	std::string str;

	std::getline(std::cin,str);

	if (str[0] != ' ')
		spaceNum++;

	for (int i = 0; str.length() -1 > i; i++)
	{
		if (str[i] == ' ')
			spaceNum++;
	}

	std::cout << spaceNum;

	return 0;
}