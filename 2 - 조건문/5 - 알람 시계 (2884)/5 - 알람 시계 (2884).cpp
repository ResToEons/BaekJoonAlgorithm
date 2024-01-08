#include <iostream>

int main()
{
	int hour, min;

	std::cin >> hour >> min;

	if (min >= 45)
	{
		min = min - 45;
		std::cout << hour << " " << min;
	}
	else
	{
		if (hour == 0)
		{
			hour = 23;
			min = min + 15;

			std::cout << hour << " " << min;
		}
		else
		{
			hour = hour - 1;
			min = min + 15;

			std::cout << hour << " " << min;
		}
	}

	return 0;
}