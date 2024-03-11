#include <iostream>
#include <string>
#define MAX_SIZE 100

int main()
{
	std::string str;

	while (1)
	{
		std::getline(std::cin, str);

		if (str == "")
			break;

		std::cout << str << std::endl;
	}

	return 0;
}