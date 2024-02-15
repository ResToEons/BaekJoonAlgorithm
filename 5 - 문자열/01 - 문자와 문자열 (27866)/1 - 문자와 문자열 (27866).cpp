aa#include <iostream>
#include <string>

int main()
{
	std::string name;
	int idx = 0;

	std::cin >> name;

	std::cin >> idx;

	std::cout << name[idx-1];

	return 0;
}