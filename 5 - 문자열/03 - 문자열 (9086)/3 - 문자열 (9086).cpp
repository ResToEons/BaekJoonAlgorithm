#include <iostream>

int main()
{
	int num;
	std::string name;

	std::cin >> num;

	for (int i = 0; num > i; i++)
	{
		std::cin >> name;

		std::cout << name[0] << name[name.length() - 1] << std::endl;

		name = "";
	}

	return 0;
}