#include <iostream>

int main()
{
	int hour, min;
	int timer;

	std::cin >> hour >> min;
	std::cin >> timer;

	min = min + timer;

	while (min >= 60)
	{
		min -= 60;
		hour++;
	}

	if (hour >= 24)
		hour -= 24;

	std::cout << hour << " " << min;

	return 0;
}