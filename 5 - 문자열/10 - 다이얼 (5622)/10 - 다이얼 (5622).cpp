#include <iostream>
#include <string>

int main()
{
	int sec = 0;
	std::string dial;

	std::cin >> dial;

	for (int i = 0; dial.length() > i; i++)
	{
		sec++;

		if (dial[i] >= 65 && dial[i] <= 67)
		{
			sec += 2;
		}
		else if (dial[i] >= 68 && dial[i] <= 70)
		{
			sec += 3;
		}
		else if (dial[i] >= 71 && dial[i] <= 73)
		{
			sec += 4;
		}
		else if (dial[i] >= 74 && dial[i] <= 76)
		{
			sec += 5;
		}
		else if (dial[i] >= 77 && dial[i] <= 79)
		{
			sec += 6;
		}
		else if (dial[i] >= 80 && dial[i] <= 83)
		{
			sec += 7;
		}
		else if (dial[i] >= 84 && dial[i] <= 86)
		{
			sec += 8;
		}
		else
		{
			sec += 9;
		}
	}

	std::cout << sec;

	return 0;
}