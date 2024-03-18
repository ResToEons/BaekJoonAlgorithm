#include <iostream>
#include <string>

int main()
{
	std::string name;
	int nameLength;
	bool isPal = true;

	std::cin >> name;

	nameLength = name.length();

	for (int i = 0; (nameLength/2)+1 > i; i++)
	{
		if (name[i] != name[nameLength - i - 1])
		{
			isPal = false;
			break;
		}
	}

	if (!isPal)
	{
		std::cout << "0";
	}
	else
	{
		std::cout << "1";
	}

	return 0;
}