#include <iostream>

int main()
{
	int actNum;
	int changeVal;
	int quarter = 0;
	int dime = 0;
	int	nickel = 0;
	int penny = 0;

	std::cin >> actNum;

	for (int i = 0; actNum > i; i++)
	{
		std::cin >> changeVal;

		while (changeVal > 0)
		{
			if (changeVal >= 25)
			{
				quarter++;
				changeVal -= 25;
			}
			else if (changeVal >= 10)
			{
				dime++;
				changeVal -= 10;
			}
			else if (changeVal >= 5)
			{
				nickel++;
				changeVal -= 5;
			}
			else if (changeVal >= 1)
			{
				penny++;
				changeVal--;
			}
			else
			{
				// Do Nothing
			}
		}

		std::cout << quarter << " " << dime << " " <<
			nickel << " " << penny << std::endl;

		quarter = 0;
		dime = 0;
		nickel = 0;
		penny = 0;
	}

	return 0;
}